import sys
import math

# Use the fast math.gcd from the standard library
mgcd = math.gcd

def solve():
    # Read all input at once for speed
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    ptr = 0
    t_cases = int(input_data[ptr])
    ptr += 1
    
    results = []
    
    for _ in range(t_cases):
        n = int(input_data[ptr])
        ptr += 1
        a = [int(x) for x in input_data[ptr : ptr + n]]
        ptr += n
        b = [int(x) for x in input_data[ptr : ptr + n]]
        ptr += n
        
        if n < 2:
            results.append("0")
            continue

        g = [mgcd(a[i], a[i+1]) for i in range(n-1)]
        
        # Mandatory divisors L_i
        l_vals = [0] * n
        l_vals[0] = g[0]
        l_vals[-1] = g[-1]
        for i in range(1, n - 1):
            l_vals[i] = (g[i-1] * g[i]) // mgcd(g[i-1], g[i])
            
        # Initial candidates for the first element
        k_orig_0 = a[0] // l_vals[0]
        max_k_0 = b[0] // l_vals[0]
        
        # Checking up to 20 candidates is sufficient for 10^9 constraints
        dp = {k_orig_0: 0}
        for k in range(1, min(max_k_0, 20) + 1):
            if k != k_orig_0:
                dp[k] = 1
        
        gcdcode = 0
        
        for i in range(1, n):
            u_prev = l_vals[i-1] // g[i-1]
            v_curr = l_vals[i] // g[i-1]
            
            k_orig = a[i] // l_vals[i]
            max_k = b[i] // l_vals[i]
            
            curr_candidates = [k_orig]
            for k in range(1, min(max_k, 20) + 1):
                if k != k_orig:
                    curr_candidates.append(k)
            
            # Key Optimization: Sort previous states by operations descending
            # This allows us to "break early" once we find a valid GCD match
            sorted_prev = sorted(dp.items(), key=lambda x: x[1], reverse=True)
            prev_ready = [(kp * u_prev, ops) for kp, ops in sorted_prev]
            
            new_dp = {}
            for kc in curr_candidates:
                cost = 1 if kc != k_orig else 0
                target_v = kc * v_curr
                
                for val_prev, ops_p in prev_ready:
                    if mgcd(val_prev, target_v) == 1:
                        new_dp[kc] = ops_p + cost
                        break
            
            dp = new_dp
            if not dp: break

        results.append(str(max(dp.values()) if dp else 0))
        
    sys.stdout.write('\n'.join(results) + '\n')

if __name__ == '__main__':
    solve()