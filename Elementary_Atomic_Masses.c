#include<stdio.h>
#include<string.h>
double get_mass(char element[]){
	
	if (strcmp(element, "hydrogen")==0) return 1.0079;
	if (strcmp(element, "helium")==0) return 4.0026;
	if (strcmp(element, "lithium")==0) return 6.9410;
	if (strcmp(element, "beryllium")==0) return 9.0122;
	if (strcmp(element, "boron")==0) return 10.811;
	if (strcmp(element, "carbon")==0) return 12.011;
	if (strcmp(element, "nitrogen")==0) return 14.007;
	if (strcmp(element, "oxygen")==0) return 15.999;
	if (strcmp(element, "fluorine")==0) return 18.998;
	if (strcmp(element, "neon")==0) return 20.180;
	if (strcmp(element, "sodium")==0) return 22.990;
	if (strcmp(element, "magnesium")==0) return 24.305;
	if (strcmp(element, "aliminium")==0) return 26.982;
	if (strcmp(element, "silicon")==0) return 28.086;
	if (strcmp(element, "phosphorus")==0) return 30.974;
	if (strcmp(element, "sulfur")==0) return 32.065;
	if (strcmp(element, "chlorine")==0) return 35.453;
	if (strcmp(element, "argon")==0) return 39.948;
	if (strcmp(element, "potassium")==0) return 39.098;
	if (strcmp(element, "calcium")==0) return 40.078;
	if (strcmp(element, "scandium")==0) return 44.956;
	if (strcmp(element, "titanium")==0) return 47.867;
	if (strcmp(element, "vanadium")==0) return 50.942;
	if (strcmp(element, "chromium")==0) return 51.996;
	if (strcmp(element, "manganese")==0) return 54.938;
	if (strcmp(element, "iron")==0) return 55.845;
	if (strcmp(element, "cobalt")==0) return 58.933;
	if (strcmp(element, "nickel")==0) return 58.693;
	if (strcmp(element, "copper")==0) return 63.546;
	if (strcmp(element, "zinc")==0) return 65.380;
	
	return 0;
}

int main (){
	printf("\t\t\tELEMENTARY ATOMIC MASS\n\n");
	printf("\t Note (write the element name with small letters and typr 'exit' to end the program)\n\n");
	char element[20];
	double mass;
	
	while (1){
		printf("Enter an element name : ");
		scanf("%s",&element);
		mass = get_mass(element);
        if (strcmp(element,"exit")== 0)
        {
			printf("\n\tThank You!\n");
            break;
        }
		if (mass > 0){
			printf("--> The mass of %s is %.4f u.\n\n",element,mass);
		}else {
			printf("Element not found.\n");
		} 
	}

	
	return 0;
}
