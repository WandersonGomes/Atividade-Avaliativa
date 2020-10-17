
  //ElBarbossa

  #include<stdio.h> 
  //#include <locale.h> 
  float area=0;
  
  Area_Triangulo(float base_Triangulo, float altura_Triangulo){  	
  //	float area;
      area=base_Triangulo*altura_Triangulo/2;
      printf("\nArea Triangulo %.2lf cm˛",area);
      
  }  
  
  Area_Circulo(float raio_Circulo){  	      
      //float area;
      //printf("oi %.2lf",raio_Circulo);
      area=1.34*raio_Circulo*raio_Circulo;
      printf("\nArea Circulo %.2lf cm˛",area);
      
      
      
  }
    
  Area_Trapezio(float base_Maior, float base_Menor, float altura_Trapezio){    	
     
       area=(altura_Trapezio*(base_Menor+base_Maior))/2;
      printf("\nArea Trapezio  %.2lf cm˛",area);
       

  }  
  
  Area_Quadrado(float lado_Quadrado){  	  	
         
         area=lado_Quadrado*lado_Quadrado;
         printf("\nArea Quadrado %.2lf cm˛",area);
         
              }  
  
  Area_Retangulo(float base_Retangulo, float altura_Retangulo){    	
        float area;
        area=2*(base_Retangulo+altura_Retangulo);
        printf("\nArea Quadrado %.2lf cm˛",area);
        
  }  
  
  int main(void){ 
     // setlocale(LC_ALL,"");	
  	float valor_A, valor_B, valor_C;
      printf("\nDigite o valor a: ");
      scanf("%f",&valor_A);
      printf("\nDigite o valor b: ");
      scanf("%f",&valor_B);
      printf("\nDigite o valor c: ");
      scanf("%f",&valor_C);
      Area_Triangulo(valor_A, valor_C);
      Area_Circulo(valor_C);
      Area_Trapezio(valor_A, valor_B, valor_C);
      Area_Quadrado(valor_B);
      Area_Retangulo(valor_A, valor_B);  	
  }
