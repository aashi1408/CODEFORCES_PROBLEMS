/*zomato takes some extra charges from the customer over the total items added in the cart
the charges taken are as follows:
1.if the destination is 5km or less ; a flat 20 rupees delivery charge is taken.
2.if the destination is beyond every km over 5km ; the company charges 2 rupees per kilometer.
3.18% taxes are also added over the cart amount(product)
4.if it is raining 20 rupees extra is charged*/
#include<stdio.h>
int main(){
	//inputs
	//; is necessary if their are different data types
	float cart_cost;float distance;char rain;
	float payable;
	printf("enter cart cost: ");
	scanf("%f",&cart_cost);
	//after adding 18% GST
	cart_cost = cart_cost + cart_cost*0.18 ;//1*18% i.e.->1.18
	printf("enter the distance : ");
	scanf("%f",&distance);
	//if distance is less or equal to 5 then we will consider that distance as 5
	if(distance<=5){
		cart_cost = cart_cost + 20;
	}
	else{
		cart_cost = cart_cost + 20 + (distance-5)*2;
	}
	printf("is it raining? (y/n) : ");
	fflush(stdin);//imp if we input char after int
	scanf(" %c",&rain);
	if(rain=='y'){
		cart_cost += 20;
	}
	printf("Please pay : Rs. %.2f/-",cart_cost);
}



























