
// Vasa implementacija ovdje
//`#include<iostream>
#include "LongNumber.hpp"

LongNumber::LongNumber() : number_{0} {}
LongNumber::LongNumber(const LongNumber& number) : number_{number.number_} {}
LongNumber::LongNumber(LongNumber&& number) : number_{number.number_} {}
LongNumber::LongNumber(const long long& number) : number_{number} {}
LongNumber::LongNumber(long long&& number) : number_{number} {}

LongNumber& LongNumber::operator=(const LongNumber& number) {
if(this!=&number) number_=number.number_;
return *this;
}
LongNumber& LongNumber::operator=(LongNumber&& number) {
number_=std::move(number.number_);
 return *this;
 }

LongNumber LongNumber::operator+(const LongNumber& number)const{return number_+number.number_;}

LongNumber LongNumber::operator-(const LongNumber& number)const{return number_-number.number_;}

LongNumber LongNumber::operator*(const LongNumber& number)const{return number_*number.number_;}

LongNumber LongNumber::operator/(const LongNumber& number)const{
  if(number.number_==0)
  return number.number_;
  return number_/number.number_;
}

LongNumber& LongNumber::operator+=(const LongNumber& number){number_=number_+number.number_; 
return *this;}

LongNumber& LongNumber::operator-=(const LongNumber& number){number_=number_-number.number_;
  return *this;}
LongNumber& LongNumber::operator*=(const LongNumber& number){number_=number_*number.number_;
  return *this;}
LongNumber& LongNumber::operator/=(const LongNumber& number){
  number_=number_/number.number_;
  return *this;}


LongNumber& LongNumber::operator=(const long long& number){number_=number;
return *this;}

LongNumber LongNumber::operator+(const long long& number)const{return number_+number;}
LongNumber LongNumber::operator-(const long long& number)const{return number_-number;}
LongNumber LongNumber::operator*(const long long& number)const{return number_*number;}
LongNumber LongNumber::operator/(const long long& number)const{
  if(number==0) 
    return number;
  else 
    return number_/number;
}
LongNumber& LongNumber::operator+=(const long long& number){number_=number_+number;
  return *this;}
LongNumber& LongNumber::operator-=(const long long& number){number_=number_-number;
  return *this;}
LongNumber& LongNumber::operator*=(const long long& number){number_=number_*number;
  return *this;}
LongNumber& LongNumber::operator/=(const long long& number){
  number_=number_/number;
  return *this;}

bool LongNumber::operator==(const LongNumber& number)const{return number_==number.number_;}
bool LongNumber::operator!=(const LongNumber& number)const{return number_!=number.number_;}
bool LongNumber::operator>(const LongNumber& number)const{return number_>number.number_;}
bool LongNumber::operator<(const LongNumber& number)const{return number_<number.number_;}
bool LongNumber::operator>=(const LongNumber& number)const{return number_>=number.number_;}
bool LongNumber::operator<=(const LongNumber& number)const{return number_<=number.number_;}
bool LongNumber::operator==(const long long& number)const{return number_==number;}

bool LongNumber::operator!=(const long long& number)const{return number_!=number;}
bool LongNumber::operator>(const long long& number)const{return number_>number;}
bool LongNumber::operator<(const long long& number)const{return number_<number;}
bool LongNumber::operator>=(const long long& number)const{return number_>=number;}
bool LongNumber::operator<=(const long long& number)const{return number_<=number;}

LongNumber LongNumber::operator^(int i)const{
  LongNumber num=number_;
  for(auto j=1; j<i; ++j){
    num*=number_;
  }
  return num;
}

LongNumber LongNumber::operator++(int){
LongNumber temp=number_;
++number_;
return temp;
}

LongNumber& LongNumber::operator++(){
  ++number_;
  return *this;
}

LongNumber LongNumber::operator--(int){
LongNumber temp=number_;
--number_;
return temp;
}

LongNumber& LongNumber::operator--(){
--number_;
return *this;

}

LongNumber LongNumber::abs()const{
  if(number_<0)
    return number_*(-1);
  else

  return number_;

}

bool LongNumber::isOdd()const{return number_%2!=0;}
bool LongNumber::isEven()const{return number_%2==0;}
bool LongNumber::isPositive()const{return number_>0;}
bool LongNumber::isNegative()const{return number_<0;}

const long long& LongNumber::value()const{return number_;}
long long& LongNumber::num(){return number_;}

std::ostream& operator<<(std::ostream& out, const LongNumber& number){
  out<<number.value();
  return out;
}
std::istream& operator>>(std::istream& in, LongNumber& number){
  in>>number.num();
  return in;

}

LongNumber::operator bool()const{return number_!=0;}


























