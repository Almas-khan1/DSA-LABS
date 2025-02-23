// EXAMPLE 3.1

// #include<iostream>
// #include<conio.h>
// using namespace std;
// int fact(int n){
//     if(n==0) {
//         return 1;
//     }
//     else{
//     return n*fact(n-1);
//     }
// }
// int main(){
//     cout<<fact(5)<<endl;
//     getch();
//     return 0;
// }

// EXAMPLE 3.2

// #include <iostream>
// #include<conio.h>
// using namespace std;
// void rev(){
// char ch;
// cin.get(ch);
// if(ch!='\n'){
//     rev();
//     cout.put(ch);
// }
// }
// int main(){
//     rev();
//     getch();
//     return 0;
    
// }

// EXAMPLE 3.3

// #include<iostream>
// using namespace std;
// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return power(x,n-1)*x;
//     }
// }
// int main(){
//     cout<<power(3,4)<<endl;
//     return 0;
// }

// EXERCISE 3.1

// #include <iostream>
// using namespace std;
// int power(int x, int n) {
//     if (n == 0) {
//         return 1; 
//     }
//     else {
//         return power(x, n - 1) * x;  
//     }
// }
// int main() {
//     int x = 2;  
//     cout << "n\t2^n" << endl;
//     for (int n = 0; n <= 20; n++) {
//         cout << n << "\t" << power(x, n) << endl;
//     }

//     return 0;
// }


// EXAMPLE 3.4

// #include<iostream>
// using namespace std;
// int ackermann(int m,int n){
//     if(m==0){
//         return(n+1);
//     }
//     else if(m>0 && n==0){
//         return (ackermann(m-1,1));
//     }
//     else if(m>0 && n>0){
//         return (ackermann(m-1,ackermann(m,n-1)));
//     }
// }
// int main(){
//      int m=1, n=0;
//       cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
//         return 0;
//     }

// EXERCISE 3.2

// #include<iostream>
// using namespace std;
// int ackermann(int m,int n){
//     if(m==0){
//         return(n+1);
//     }
//     else if(m>0 && n==0){
//         return (ackermann(m-1,1));
//     }
//     else if(m>0 && n>0){
//         return (ackermann(m-1,ackermann(m,n-1)));
//     }
// }
// int main(){
//      int m=3, n=4;
//       cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
//         return 0;
//     }

// EXERCISE 3.3

// A)    

// #include <iostream>
// using namespace std;

// void printNumbers(int n) {
//     if (n < 0) return;  
//     cout << n << " ";   
//     printNumbers(n - 1); 
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     printNumbers(n);
//     return 0;
// }

// B) 

// #include <iostream>
// using namespace std;

// int binomialCoeff(int n, int k) {
//     if (k == 0 || k == n) return 1; 
//     return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k); 
// }

// int main() {
//     int n, k;
//     cout << "Enter values for n and k: ";
//     cin >> n >> k;
//     cout << "C(" << n << ", " << k << ") = " << binomialCoeff(n, k);
//     return 0;
// }

// C)

//  #include <iostream>
// using namespace std;

// bool isPrimeHelper(int n, int i) {
//     if (i == 1) return true;  
//     if (n % i == 0) return false; 
//     return isPrimeHelper(n, i - 1); 
// }

// bool isPrime(int n) {
//     if (n <= 1) return false;
//     return isPrimeHelper(n, n - 1); 
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (isPrime(n))
//         cout << n << " is a prime number.";
//     else
//         cout << n << " is not a prime number.";
//     return 0;
// }
