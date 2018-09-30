/*  EX 1.2  */
#include <stdio.h>
#include <stdio.h>
int main (void)

{
	#define PI 3.14
	int pies;
	int cake;
	int bikes;
	int water;
	int nein;
	int wilkommen;
	
	
	float  water_weight, pie_weight, total_weight, pie_radius, total_pie_area, total_cake, total_bike_tickets;

	printf("Enter the number of slices of cake>");
	scanf("%i", &cake);
	
	printf("Enter how many gallons of water>");
	scanf("%i", &water);
	
	printf("Enter the number of bikes>");
	scanf("%i", &bikes);
	
	printf("Enter the number of pies>");
	scanf("%i", &pies);
	
	printf("Enter the weight per pie in Lbs>");
	scanf("%f", &pie_weight);
	
	printf("Enter the raidus of the pies in inches>");
	scanf("%f", &pie_radius);
	
	total_weight = pies * pie_weight;
	total_cake = cake * pie_weight;
	total_bike_tickets = bikes * cake;
	total_pie_area = PI * pie_radius * pie_radius * pies;
	water_weight = pie_weight / water;
	
	
	printf("The total weight of the pies is %f ibs \n>", total_weight);
	printf("The total area of the pies %f square inches \n", total_pie_area);
	printf("The total numbers of cake %f non slices \n", total_cake);
	printf("The total number of bike tickets is %f \n", total_bike_tickets);
	printf("The total amount of water is %f", water_weight);
	
	
	return(0);
	
}
