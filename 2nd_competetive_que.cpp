/*Problem Statement
Given an integer array nums , return an array answer such that answer[i] is equal to the
product of all the elements of nums except nums[i] .
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division
operation

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]*/

#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int devide(int dividend,int divisor)
{
	if(dividend==0)
		return 0;
	if(divisor==0)
	{
		cout<<"Division by o is impossible \n";
		return 0;
	}
	int sign=(dividend < 0)^(divisor <0);
		dividend=abs(dividend);
		divisor=abs(divisor);
	if(divisor == 1)
		return((sign==0)?dividend:-dividend);
	int ans=exp(log(dividend)-log(divisor))+0.0000000001;
return ((sign==0)?ans: -ans);
		
}
int main()
{
	int i,j;
	int num[]={-1,1,0,-3,3};
	int ans[10],size=5,coutZero=0,mul;
	
	for(i=0;i<size;i++)
	{
		if(num[i]==0)
			coutZero++;
		else{
		mul=num[i]*mul;
	}
	}
	for(i=0;i<size;i++)
	{
		if(coutZero>1)
		ans[i]=0;
	else if(coutZero==1)
	{
		if(num[i]==0)
		ans[i]=0;
	else
	ans[i]=mul;
	}
	else
	{
		ans[i]=devide(mul,num[i]);
	}
}
}
