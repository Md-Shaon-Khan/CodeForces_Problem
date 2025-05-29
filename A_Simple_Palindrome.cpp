#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string ans;
        string s="aeiou";
 
        for(int i=0;i<n;i++)
        {
            ans += s[i%5];
        }
        
        sort(ans.begin(),ans.end());
 
        cout<<ans<<endl;
    }
    return 0;
}

// import java.util.*;

// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//         int t = sc.nextInt(); // Reading number of test cases
        
//         while (t-- > 0) {
//             int n = sc.nextInt(); // Reading the value of 'n'
//             StringBuilder ans = new StringBuilder(); // To build the resultant string
//             String s = "aeiou"; // Vowel string
            
//             // Appending vowels in cyclic manner
//             for (int i = 0; i < n; i++) {
//                 ans.append(s.charAt(i % 5));
//             }
            
//             // Converting StringBuilder to a char array for sorting
//             char[] charArray = ans.toString().toCharArray();
//             Arrays.sort(charArray);
            
//             // Outputting the sorted string
//             System.out.println(new String(charArray));
//         }
        
//         sc.close();
//     }
// }
