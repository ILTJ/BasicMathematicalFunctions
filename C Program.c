#include <fstream>
using namespace std;
int main() {
   int x, n, s, min, max;
   ifstream in("data.txt");
   ofstream out("output.txt");
   n = 0; //For counting number of integers
   s = 0; //For adding up all the integers
   max=0; //For finding the largest integer
   min=100; //For finding the smallest integer
   while (in >> x){
    n = n + 1;
    s = s + x;
    if (x>max) max=x;
    if (x<min) min=x;
   }
   out << "The number of integers is " << n << endl;
   out << "The largest number is " << max << endl;
   out << "The smallest number is" << min << endl;
   out << "The sum of all the numbers is" << s << endl;
   system("pause");
   return 0;
}
