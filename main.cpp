#include <iostream>
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
int main() {
   int lcmTestA=10000, lcmTestB=2000, lcm;
   if(lcmTestA>lcmTestB)
   lcm = lcmTestA;
   else
   lcm = lcmTestB;

   bool notDone =true;
   int loopCount = 0;
   for(int i=lcmTestA*lcmTestB; i>0 ;i--) {
     loopCount++;
      if( lcm%lcmTestA==0 && lcm%lcmTestB==0 ) {
         break;
      }
      lcm++;
   }   
   cout<<"Try:"<<loopCount << " The LCM of "<<lcmTestA<<" and "<<lcmTestB<<" is "<<lcm << endl;

   int gcdTestA = 10000, gcdTestB = 5;

   
   cout<<"GCD of "<< gcdTestA <<" and "<< gcdTestB <<" is "<< gcd(gcdTestA, gcdTestB) << endl;
   return 0;
}