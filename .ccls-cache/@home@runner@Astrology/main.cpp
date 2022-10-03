#include <iostream>
using namespace std;


void astrologySign (int day, string month) {
  if(month == "Jan") {
  if(day<=21)
  {
    cout<<"Capricorn"<< endl;
  }
    else
  {
    cout<<"Aquarius"<< endl;
  }
  }  

  else if(month == "Feb") {
  if(day<=20)
  {
    cout<<"Aquarius"<< endl;
  }
    else
  {
    cout<<"Pisces"<< endl;
  }
  }
    
else if(month == "Mar") {
  if(day<21)
  {
    cout<<"Pisces"<< endl;
  }
    else
  {
    cout<<"Aries"<< endl;
  }
  
  }else if(month == "Apr") {
  if(day<21)
  {
    cout<<"Aries"<< endl;
  }
    else
  {
    cout<<"Taurus"<< endl;
  }
  }else if(month == "May") {
  if(day<21)
  {
    cout<<"Taurus"<< endl;
  }
    else
  {
    cout<<"Gemini"<< endl;
  }
  
  }else if(month == "Jun") {
  if(day<22)
  {
    cout<<"Gemini"<< endl;
  }
    else
  {
    cout<<"Cancer"<< endl;
  }
  
  }else if(month == "Jul") {
  if(day<23)
  {
    cout<<"Cancer"<< endl;
  }
    else
  {
    cout<<"Leo"<< endl;
  }
  
  }else if(month == "Aug") {
  if(day<23)
  {
    cout<<"Leo"<< endl;
  }
    else
  {
    cout<<"Virgo"<< endl;
  }
  
  }else if(month == "Sep") {
  if(day<22)
  {
    cout<<"Virgo"<< endl;
  }
    else
  {
    cout<<"Libra"<< endl;
  }
  
  }else if(month == "Oct") {
  if(day<23)
  {
    cout<<"Libra"<< endl;
  }
    else
  {
    cout<<"Scorpio"<< endl;
  }
  
  }else if(month == "Nov") {
  if(day<23)
  {
    cout<<"Scorpio"<< endl;
  }
    else
  {
    cout<<"Sagittarius"<< endl;
  }
  
  }else if(month == "Dec") {
  if(day<22)
  {
    cout<<"Sagittarius"<< endl;
  }
    else
  {
    cout<<"Aquarius"<< endl;
  }
  }



}

int main() {

 int t;
  cin>>t;

  for (int i=0; i<t; i++){

    
    
    string month;
    cin>>month;
    int day;
    cin>> day;

    astrologySign (day, month);
  }
  }