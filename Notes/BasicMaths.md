## Basic Maths Required for solving DSA. 

### Digit Concept : 
In this process you would be extracting every digit in a number. 

**Example:**

    - If we have a number , n = 7289 we need to access the every digit of the integer.
    - % => gives the remainder. 
    - / => divides the number. 

        ```
            while(n>0){
                last-digit = n % 10;
                n = n / 10;
            }
        ```
**Example Question 1 :**
    - You are given a number 'n'.
    - Return number of digits in ‘n’.

    ```
        int countDigits(int n){
            // Write your code here.	
            int numberOfDigits = (int)(log10(n) + 1);
                return numberOfDigits;
        }

                        or

        int countDigits(int n){
            int cnt = 0;
            while(n>0){
                cnt = cnt + 1;
                n = n / 10;
            }
        }
    ```

**Example Question 2 :**
    Problem Statement: Given a number N reverse the number and print it.

    Example 1:
    Input: N = 123
    Output: 321
    Explanation: The reverse of 123 is 321

    ```
       int reverseNumber(int n){
        int revNumber = 0;
        while(n > 0){
            int lastDigit = n % 10;
            n = n % 10 
            revNumber = (revNumber * 10) + lastDigit;
        }
        return lastDigit;
       } 
    ```
**Example Question 3 :**
    Problem Statement : Given a number check if it is a palindrome.
    
    Input: N = 123
    Output: Not Palindrome Number
    Explanation: 123 read backwards is 321.Since these are two different numbers 123 is not a palindrome.
    
    Input: N =  121 
    Output: Palindrome Number
    Explanation: 121 read backwards as 121.Since these are two same numbers 121 is a palindrome.

    ```
        void checkPalindrome(int n){
            int temp = n;
            int reverseNumber = 0;
            while(n > 0){
                int lastDigit = n % 10;
                n = n /10;
                reverseNumber = (reverseNumber * 10) + lastDigit;
            }
            if(reverseNumber == temp){
                cout<< "Palindrome Number";
                return ;
            }
            cout<<" Not a Palindrome Number";
        }
    ```
**Example Question 4 :**
    Problem Statement: Given a number, check if it is Armstrong Number or Not.
    Example 1:
    Input:153 
    Output: Yes, it is an Armstrong Number
    Explanation: 1^3 + 5^3 + 3^3 = 153

    Input:170 
    Output: No, it is not an Armstrong Number
    Explanation: 1^3 + 7^3 + 0^3 != 170


    ```
    int main() {
        int num, originalNum, remainder, n = 0, result = 0, power;
        cout << "Enter an integer: ";
        cin >> num;

        originalNum = num;

        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;

            // pow() returns a double value
            // round() returns the equivalent int
            power = round(pow(remainder, n));
            result += power;
            originalNum /= 10;
        }

        if (result == num)
            cout << num << " is an Armstrong number.";
        else
            cout << num << " is not an Armstrong number.";
        return 0;
    }
    ```
**Example Question 5 :**
    Problem statement: Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’.
    For example:
    'N' = 5.
    The divisors of 5 are 1, 5.

    ```
    void printDivisors(int n){
        for(int i=1; i<n; i++){
            if(n % i == 0){
                cout<< i <<" ";
            }
        }
        return;
    }
    ```
**Example Question 6 :**
    Problem statement: Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.
        For example:
        'N' = 5.
        The divisors of 5 are 1, 5.

        ```
        #include <cmath>
        #include <iostream>
        #include<vector>
        using namespace std;

        void findAllDivisors(int n){
            vector <int> v;
            for(int i=1; i<=sqrt(n); i++){
                if(n % i == 0){
                    v.push_back(i);
                    if((n/i) != i){
                        v.push_back(n/i);
                    }
                }
            }
            sort(v.begin(), v.end());
            for(auto it :v){
                cout<<it<<" ";
            }

        }

        int main(){
            int n = 36;
            findAllDivisors(n);
            return 0;
        }
        ```
**Example Question 7 :**
    Problem Statement : Check wheather the number is a Prime number or not.

    ```
    void findPrimeOrNot(int n){
    int count = 0;
    for(int i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            count ++;
            if((n/i) != i){
                count++;
            }
        }
    }
    if(count == 2){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }

    }

    int main(){
        int n = 2;
        findPrimeOrNot(n);
        return 0;
    }
    ```