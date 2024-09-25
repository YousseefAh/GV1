#include <iostream>
#include <vector>
//using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::vector;

int add(int one, int two) { return one+two;}
void one (){
    //copy this code into the main and run it if you want to test it
    cout << "hello"<<std::endl;
    int age= 13;
    string name = "alx \n";
    cout<< name;
    if (age>18){cout<<"hi you are > 18";}
    else{cout<<"you are less than 18";}

    int the_sum = add(4,4);
    cout<<the_sum;
    int arr[5]={1,2,3,4,5};
    int size = std::size(arr);
    int size2= sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++){cout<< arr[i]<<",";} std::cout<< std::endl;
    for (int num:arr){cout<<num<<",";} std::cout<< std::endl;
}

class man{
public:
    void run(){cout<<" runs \n";}
};
class animal:public man{
public:
    void makesound(){cout<<"make a sound\n";}
};
void oop (){
    // add this code to main if you want it to test it
    man man_one;
    man_one.run();
    animal dog;
    dog.run();
    dog.makesound();

};
/*
remember how to use name space #include <iostream>

namespace MyNamespace {
    void display() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

int main() {
    MyNamespace::display();
    return 0;
}

 */
/*nice one

 struct Square {
    void operator()(int n) {
        std::cout << n * n << " ";
    }
};

std::for_each(numbers.begin(), numbers.end(), Square());
 */
int main()
{

vector<int> nums ={1,2,3,4,5};
int size = std::size(nums);
for (int num:nums){cout<<num<<"->\n";}
for (int i=0;i<size;i++){cout<<nums[i]<<",";}
/*
 * this is  important
 *
    template <typename T>

    T add(T a, T b) {
        return a + b;
    }
    int main() {
       cout << "Integer addition: " << add(5, 3) << std::endl;
       cout << "Double addition: " << add(5.5, 3.5) << std::endl;
        return 0;
    }

*/



}
