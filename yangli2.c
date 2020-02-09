#include<stdio.h>
#include<string.h>

char hanzi[20][20]={"零","一","二","三","四","五","六","七","八","九","十"}; 

int num(char d[]){
	 if(strlen(d)==2)
        return hzhuans(d); 
}
int num1(char f[]){
	 if(strlen(f)==2)
        return hzhuans(f); 
}

int hzhuans(char d[]){
    int i;
    for(i=0;i<11;i++){
        if(!strcmp(hanzi[i],d)){
            return i;
        }
    }
}

int jiafa(int x,char c[]){
    
	int y;
    y=num(c);
	return x+y;
  
}
int jiafa1(int x,char h[]){
    
	int y;
    y=num(h);
	return x+y;
  
}

int jianfa(int x,char c[]){

    int y;
	y=num(c);
	return x-y;
    
}


int main(){
    int age,money;
    char a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],i[100],j[100];

    printf("请输入:\n");
	printf("\n");

    scanf("%s %s %s %s",a,b,c,d);//整数 小杨年龄 等于 八
	scanf("%s %s %s %s",a,e,c,f);//整数 小杨零花钱 等于 二

    age=num(d);
	money=num1(f);

    while(scanf("%s %s",a,b)!=EOF){
		if(strcmp(a,"看看")==0){
			printf("\n");
		    printf("%s\n",hanzi[money]);
		    return 0;
		}
		else if(strcmp(a,"如果")==0){
		     scanf("%s %s %s %s %s %s %s %s",c,d,e,f,g,h,i,j);
			 if(age>8){
		         money=jiafa1(money,h); 
			 }
			 else{
				 money=money;
			 }
		}
        else if(strcmp(a,"小杨年龄")==0){
			scanf("%s",c); 
		    if(strcmp(b,"增加")==0){
			   age=jiafa(age,c);
			}
            if(strcmp(b,"减少")==0){
               age=jianfa(age,c); 
			}
		}
	}
	
   return 0;       
}
 
  

