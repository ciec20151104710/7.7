#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char *str;
	int flen;
	int i=0;
	fp=fopen("export.gpx","r+");
	if(fp==NULL)
	{
		printf("�޷����ļ����ļ�����\n");
		return(-1); 
	}
	fseek(fp,0,SEEK_END);
	flen=ftell(fp);

	fclose(fp);
	return 0;
}
