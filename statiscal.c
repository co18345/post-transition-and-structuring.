#include<stdio.h>
struct alphabet
{
	char alpha[500];
};
struct word
{
	char word[10];
	char str[100];
	int i, j, found;
    int strLen, wordLen;

};
struct sentence
{
	int i,a;
	char str[500];
};

void main()
{
	int a,index;
	printf("1 or 2 or 3= ");
	scanf("%d",&a);
	
	if(a==1)
	{
		struct alphabet p1;
		fflush(stdin);
		printf("Enter a string= ");
		gets(p1.alpha);
		
		printf("At what index you want to see= ");
		scanf("%d",&index);
		
		printf("At %d index this alphabet is present= %c",index,p1.alpha[index]);
	}
	
	else if(a==2)
	{
		struct word p2;
		/* Input string and word from user */
		fflush(stdin);
    	printf("Enter any string: ");
    	gets(p2.str);
    	printf("Enter any word to search: ");
    	gets(p2.word);

    	p2.strLen  = strlen(p2.str);  // Find length of string
    	p2.wordLen = strlen(p2.word); // Find length of word

    	for(p2.i=0; p2.i<p2.strLen - p2.wordLen; p2.i++)
    	{
        	// Match word at current position
        	p2.found = 1;
        	for(p2.j=0; p2.j<p2.wordLen; p2.j++)
        	{
        	    // If word is not matched
        	    if(p2.str[p2.i + p2.j] != p2.word[p2.j])
        	    {
        	        p2.found = 0;
        	        break;
        	    }
        	}
			
			if(p2.found == 1)
        	{
        	    printf("'%s' found at index: %d \n", p2.word, p2.i);
        	    break;
        	}
    	}
	}
	
	else if(a==3)
	{
		struct sentence p3;
		fflush(stdin);
		printf("Enter a string= ");
		gets(p3.str);
		
		for(p3.i=0;p3.i<=strlen(p3.str);p3.i++)
		{
			p3.a=0;
			if(p3.str[p3.i]=='.')
			{
				p3.a++;
			}
		}
		printf("total lines= %d",a-1);
	}
}
