#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
 	int a[10],max=0,min=0,rez=0;
 	for(int i=0;i<10;i++)
	 		{
			scanf("%d",&a[i]);
			}
    int k;
    for(k=0;k<10;k++){
		    rez+=a[k];
			if(rez>=100){
					   max=rez;
					   break;
					   }
			min=rez;
			}
		if(max<100)printf("%d",min);
    else if(100-min<max-100) printf("%d",min);
    else if(100-min>=max-100) printf("%d",max);
    for(;;);
    return 0;
}
