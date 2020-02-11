#include<stdio.h>
#include<string.h>

char hanzi[20][20]={"零","一","二","三","四","五","六","七","八","九","十"}; 

int num(char d[]){
    if(strlen(d)==2){
        return hzhuans(d); 
    }
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

int jianfa(int x,char c[]){

    int y;
	y=num(c);
	return x-y;
    
}


int main(){
    int sum;
    char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],i[20],j[20];

    printf("请输入:\n");
	printf("\n");

    scanf("%s %s %s %s",a,b,c,d);//整数 气温 等于 十
    sum=num(d);

    while(scanf("%s %s",a,b)!=EOF){
       if(strcmp(a,"看看")){
		   scanf("%s",c); 
		   if(strcmp(b,"增加")==0){
			   sum=jiafa(sum,c);
		   }
           if(strcmp(b,"减少")==0){
               sum=jianfa(sum,c); 
		   }
	   }
       else{
		    scanf("%s %s %s %s %s %s %s %s %s %s",a,b,c,d,e,f,g,h,i,j);
            printf("\n");  
			printf("%s\n",hanzi[sum]);
		    if(sum>8)
			    printf("你好,世界\n");
	        else
			    printf("冻死我了\n");
			return 0;
	   }
	}
   return 0;       
}
 

 

