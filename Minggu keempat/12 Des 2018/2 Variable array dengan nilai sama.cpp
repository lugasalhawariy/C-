#include <iostream>

int main()
{
 short age[4];
 short same_age[4];

 age[0] = 23;
 age[1] = 34;
 age[2] = 65;
 age[3] = 74;

 same_age[0] = age[0];
 same_age[1] = age[1];
 same_age[2] = age[2];
 same_age[3] = age[3];

 std::cout<<same_age[0]<<std::endl;
 std::cout<<same_age[1]<<std::endl;
 std::cout<<same_age[2]<<std::endl;
 std::cout<<same_age[3]<<std::endl;
 return 0;
}
