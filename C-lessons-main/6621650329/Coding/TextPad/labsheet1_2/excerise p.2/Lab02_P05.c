#include <stdio.h>

main()
{
	float area;
	float building_area;
	float Contractor_per_tile;
	float tile_quantity;
	float tile_time;
	float tile_price;

	printf("Please input area : ");
	scanf("%f",&area);

	printf("Please input building area : ");
	scanf("%f",&building_area);

	area -= building_area;

	tile_quantity = area / 4;

	tile_time = tile_quantity * 2;

	tile_price = tile_quantity * 500;

	Contractor_per_tile = tile_quantity * 600;


	printf("Area is : %.2f square meter\n",area);
	printf("tile time is  : %.2f minutes\n",tile_time);
	printf("tile needed is  : %.2f quantity\n",tile_quantity);
	printf("tile price is  : %.2f Baht\n",tile_price);
	printf("Contractor per tile is  : %.2f Baht\n",Contractor_per_tile);



}
