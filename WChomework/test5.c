int main(int argc,char *argv[])			//main函数接受外部参数  
{
	char a1[80],a2[80];
	int i;
	FILE *p;
	if(argc == 3)
	{
		p = fopen(argv[2],"r");
		if(p == NULL)
		{
			printf("Reading ERROR\n");
			printf("请按enter继续");
			_getch();
			exit(0);
		}
		strcpy(a2,argv[2]);
		strcpy(a1,argv[1]);
		for(i = 0;a1[i]!='\0';i++)
		{		 
			if(a1[i] == 'l')
				statisticline(a2);
			else if(a1[i] == 'a')
				Muiltiple(a2);
		    else if(a1[i] == 'c')
				statisticch(a2);
		    else if(a1[i] == 'w')
				statisticword(a2);
			else
				continue;    
		}           
	}	
	else
		printf("Warning:Please input three parameters");
	return 0; 
}