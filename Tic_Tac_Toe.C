#include<stdio.h>
#include<conio.h>
void xo();
void cpu();
void main()
{       int ch;
	clrscr();
	printf("----------------------------------Tic--Tac--Toe---------------------------------");
	printf("1: CPU vs User\n2: User vs User\nChoice->");
	scanf("%d",&ch);
	if(ch==2)
	{
	xo();
	}
	if(ch==1)
	{
	cpu();
	}

}
	void xo()
{
	int w=0,v=9,j=1;
	char a='_',b='_',c='_',d='_',e='_',f='_',g='_',h='_',i='_',z,p,k,u,n,q;
	clrscr();
	for(k=1;k<=v;k++)
	{
		printf("|New-n|\n|Undo-u|\n|Quit-q|");
		printf("\n");
		printf("\t\t\t\t|%c||%c||%c|",a,b,c);
		printf("\n\t\t\t\t|%c||%c||%c|",d,e,f);
		printf("\n\t\t\t\t|%c||%c||%c|",g,h,i);
		printf("\n\t\t\t\t|a|b|c|");
		printf("\n\t\t\t\t|d|e|f|");
		printf("\n\t\t\t\t|g|h|i|");
		printf("\n");
		if(j%2==0)
		{
			printf("X turn");
		}
		else
		{
			printf("O turn");
		}
		j++;
		printf("\n\nEnter the alphabate ");
		scanf("\n%c",&p);

		switch(p)
	    {
		case 'a':
			  if(k%2==0)
			  {

				a='x';
			  }
			  else
			  {
				a='o';
			  }


		       break;
		case 'b':
				if(k%2==0)
			{
				b='x';
			}
			else
			{
				b='o';
			}
		       break;
		case 'c':
				if(k%2==0)
			{
				c='x';
			}
			else
			{
				c='o';
			}
		       break;
		case 'd':
				if(k%2==0)
			{
				d='x';
			}
			else
			{
				d='o';
			}
		       break;
		case 'e':
				if(k%2==0)
			{
				e='x';
			}
			else
			{
				e='o';
			}
			break;
		case 'f':
				if(k%2==0)
			{
				f='x';
			}
			else
			{
				f='o';
			}
		       break;
		case 'g':
				if(k%2==0)
			{
				g='x';
			}
			else
			{
				g='o';
			}
		       break;
		case 'h':

				if(k%2==0)
			{
				h='x';
			}
			else
			{
				h='o';
			}
		       break;
		case 'i':
				if(k%2==0)
			{
				i='x';
			}
			else
			{
				i='o';
			}
		       break;
		case 'n':
			clrscr();
			a='_';
			b='_';
			c='_';
			d='_';
			e='_';
			f='_';
			g='_';
			h='_';
			i='_';
			k=0;
			p=9;
			j=1;

			continue;
			case 'u':
			if(z=='a')
			{
			  a='_';
			  v++;



			}
				if(z=='b')
			{       b='_';
				v++;


			}
				if(z=='c')
			{        c='_';
				v++;



			}
				if(z=='d')
			{       d='_';
				v++;


			}
				if(z=='e')
			{       e='_';
				v++;


			}
				if(z=='f')
			{        f='_';
				 v++;


			}
				if(z=='g')
			{        g='_';
				 v++;


			}
				if(z=='h')
			{       h='_';
				v++;


			}
				if(z=='i')
			{       i='_';
				v++;

			}
				break;
		case 'q':
			goto quit;


	    }
		  z=p;

		    clrscr();

		if(a=='o'&&b=='o'&&c=='o'||d=='o'&&e=='o'&&f=='o'||g=='o'&&h=='o'&&i=='o'||a=='o'&&d=='o'&&g=='o'||b=='o'&&e=='o'&&h=='o'||c=='o'&&f=='o'&&i=='o'||a=='o'&&e=='o'&&i=='o'||c=='o'&&e=='o'&&g=='o')

		{       clrscr();

			w=2;
			break;
		}


		if(a=='x'&&b=='x'&&c=='x'||d=='x'&&e=='x'&&f=='x'||g=='x'&&h=='x'&&i=='x'||a=='x'&&d=='x'&&g=='x'||b=='x'&&e=='x'&&h=='x'||c=='x'&&f=='x'&&i=='x'||a=='x'&&e=='x'&&i=='x'||c=='x'&&e=='x'&&g=='x')

		{       clrscr();

			w=1;
			break;
		}





		}

		 if(w==2)
		 {
		 printf("\n\n\n\n\n\t\t\t\t\tO Win");
		 }

		if(w==1)
		{
			printf("\n\n\n\n\n\t\t\t\t\t\tX Win");

		 }
		 if(w==0)
		 {
			 printf("\n\n\n\n\n\t\t\t\t\tDraw");
		 }
		 quit:
		 getch();

	}
	      //cpu
		  void cpu()
{

		int w=0,v=5,l,gd=1;
	char a='_',b='_',c='_',d='_',e='_',f='_',g='_',h='_',i='o',z,p,k,u,n,q;
	clrscr();
	for(k=1;k<=v;k++)
	{
		printf("|New-n|\n|Quit-q|");
		printf("\n");
		printf("\t\t\t\t|%c||%c||%c|",a,b,c);
		printf("\n\t\t\t\t|%c||%c||%c|",d,e,f);
		printf("\n\t\t\t\t|%c||%c||%c|",g,h,i);
		printf("\n\t\t\t\t|a|b|c|");
		printf("\n\t\t\t\t|d|e|f|");
		printf("\n\t\t\t\t|g|h|i|");
		printf("\n");
		 gd=1;
		printf("X turn");
		
		printf("\n\nEnter the alphabate ");
		scanf("\n%c",&p);
		if(i=='x')
		{
			p='n';
		}

		switch(p)
	    {
			
		case 'a':
		       a='x';
		       break;
		case 'b':
				b='x';
		       break;
		case 'c':
				c='x';
		       break;
		case 'd':
				d='x';
		       break;
		case 'e':
				e='x';
			break;
		case 'f':
				f='x';
		       break;
		case 'g':
				g='x';
		
		       break;
		case 'h':
				h='x';
		       break;
		case 'i':
				i='x';
		       break;
		case 'n':
			clrscr();
			a='_';
			b='_';
			c='_';
			d='_';
			e='_';
			f='_';
			g='_';
			h='_';
			i='o';
			k=0;
			p=9;
			gd=1;
			w=0;
			v=5;
			continue;
		case 'q':
			goto quit;


	    }
			
	//if e
		if((i=='o'&&e=='x'&&g=='o'&&h=='x'&&b=='o'&&f=='x')||(i=='o'&&g=='o'&&b=='x'&&h=='x'&&a=='_'&&c=='_'&&d=='_'&&e=='_'&&f=='_')||(i=='o'&&g=='o'&&c=='o'&&e=='x'&&f=='x'&&h=='x')||(i=='o'&&e=='x'&&g=='o'&&h=='x'&&d=='x'&&a=='_'&&c=='_'&&f=='_')||(e=='x'&&h=='x'&&d=='_'&&f=='_'&&a=='_'&&b=='_'&&c=='_'))
	{
		//defencive hr
			
			for(l=1;l==1;l++)
			{
		 if(a=='x'&&b=='x'&&c=='_')
		 {
			 c='o';
			 ;
			 break;
		 }
		 if(b=='x'&&c=='x'&&a=='_')
		 {
			 a='o';
			 ;
			 break;
		 }
		 if(d=='x'&&e=='x'&&f=='_')
		 {
			 f='o';
			 ;
			 break;
		 }
		if(e=='x'&&f=='x'&&d=='_')
		 {
			 d='o';
			 ;
			 break;
		 }
		if(d=='x'&&e=='x'&&f=='_')
		 {
			 f='o';
			 ;
			 break;
		 }
		if(g=='x'&&h=='x'&&i=='_')
		 {
			 i='o';
			 ;
			 break;
		 }
		if(i=='x'&&h=='x'&&g=='_')
		 {
			 g='o';
			 ;
			 break;
		 }
		// defensive vr

		if(a=='x'&&d=='x'&&g=='_')
		 {
			 g='o';
			 ;
			 break;
		 }
		if(g=='x'&&d=='x'&&a=='_')
		 {
			 a='o';
			 ;
			 break;
		 }
		 if(b=='x'&&e=='x'&&h=='_')
		 {
			 h='o';
			 ;
			 break;
		 }
		 if(h=='x'&&e=='x'&&b=='_')
		 {
			 b='o';
			 ;
			 break;
		 }
		 if(c=='x'&&f=='x'&& i=='_')
		 {
			 i='o';
			 ;
			 break;
		 }
		 if(f=='x'&&i=='x'&&c=='_')
		 {
			 c='o';
			 ;
			 break;
		}
		 //defencive gap
		 if(a=='x'&&c=='x'&&b=='_')
		 {
			 b='o';
			 ;
			 break;
		 }
		 if(a=='x'&&g=='x'&&d=='_')
		 {
			 d='o';
			 ;
			 break;
		 }
		 if(a=='x'&&i=='x'&&e=='_')
		 {
			 e='o';
			 ;
			 break;
		 }

		 if(d=='x'&&f=='x'&&e=='_')
		 {
			 e='o';
			 ;
			 break;
		 }
		 if(b=='x'&&h=='x'&&e=='_')
		 {
			 e='o';
			 ;
			 break;
		 }
		 if(g=='x'&&c=='x'&&e=='_')
		 {
			 e='o';
			 ;
			 break;
		 }
		 if(g=='x'&&i=='x'&&h=='_')
		 {
				h='o';
				;
				break;
		 }
		  if(c=='x'&&i=='x'&&f=='_')
		 {
			 f='o';
			 ;
			 break;
		}
			}
		
			gd=0;
	}
	
	
	 //offensive hr
		if(gd==1)
		{
		
		 for(l=1;l==1;l++)
		 {
			 
		 if(a=='o'&&b=='o'&&c=='_')
		 {
			 c='o';
			 gd=2;
			 break;
		 }
		 if(b=='o'&&c=='o'&&a=='_')
		 {
			 a='o';
			 gd=2;
			 break;
		 }
		 if(d=='o'&&e=='o'&&f=='_')
		 {
			 f='o';
			 gd=2;
			 break;
		 }
		if(e=='o'&&f=='o'&&d=='_')
		 {
			 d='o';
			 gd=2;
			 break;
		 }
		if(d=='o'&&e=='o'&&f=='_')
		 {
			 f='o';
			 gd=2;
			 break;
		 }
		if(g=='o'&&h=='o'&&i=='_')
		 {
			 i='o';
			 gd=2;
			 break;
		 }
		if(i=='o'&&h=='o'&&g=='_')
		 {
			 g='o';
			 gd=2;
			 break;
		 }
		// offensive vr
		

		if(a=='o'&&d=='o'&&g=='_')
		 {
			 g='o';
			 gd=2;
			 break;
		 }
		if(g=='o'&&d=='o'&&a=='_')
		 {
			 a='o';
			 gd=2;
			 break;
		 }
		 if(b=='o'&&e=='o'&&h=='_')
		 {
			 h='o';
			 gd=2;
			 break;
		 }
		 if(h=='o'&&e=='o'&&b=='_')
		 {
			 b='o';
			 gd=2;
			 break;
		 }
		 if(c=='o'&&f=='o'&& i=='_')
		 {
			 i='o';
			 gd=2;
			 break;
		 }
		 if(f=='o'&&i=='o'&&c=='_')
		 {
			 c='o';
			 gd=2;
			 break;
		}
		 //offensive gap
		 if(a=='o'&&c=='o'&&b=='_')
		 {
			 b='o';
			 gd=2;
			 break;
		 }
		 if(a=='o'&&g=='o'&&d=='_')
		 {
			 d='o';
			 gd=2;
			 break;
		 }
		 if(a=='o'&&i=='o'&&e=='_')
		 {
			 e='o';
			 gd=2;
			 break;
		 }
		
		 if(d=='o'&&f=='o'&&e=='_')
		 {
			 e='o';
			 gd=2;
			 break;
		 }
		 if(b=='o'&&h=='o'&&e=='_')
		 {
			 e='o';
			 gd=2;
			 break;
		 }
		 if(g=='o'&&c=='o'&&e=='_')
		 {
			 e='o';
			 gd=2;
			 break;
		 }
		 if(g=='o'&&i=='o'&&h=='_')
		 {
			 h='o';
			 gd=2;
			 break;
		 }
		  if(c=='o'&&i=='o'&&f=='_')
		 {
			 f='o';
			  gd=2;
			 break;
		 }
		 if(a=='o'&&e=='o'&&i=='_')
		 {
			 i='o';
			  gd=2;
			 break;
		 }
		  if(e=='o'&&i=='o'&&a=='_')
		 {
			 a='o';
			  gd=2;
			 break;
		 }
		  if(g=='o'&&e=='o'&&c=='_')
		 {
			 c='o';
			  gd=2;
			 break;
		 }
		  if(c=='o'&&e=='o'&&g=='_')
		 {
			 g='o';
			  gd=2;
			 break;
		 }
		 
	
	 	 //auto offensive
		 if(i=='o'&&a=='x'&&g=='o'&&h=='x'&&b=='_'&&c=='_'&&f=='_'&&e=='_'&&d=='_')
		 {
			 c='o';
		 }
		 if(i=='o'&&a=='_'&&g=='o'&&h=='x'&&b=='_'&&c=='_'&&f=='_'&&e=='_'&&d=='x')
		 {
			 c='o';
		 }
		 if(i=='o'&&g=='x'&&a=='_'&&b=='_'&&c=='_'&&d=='_'&&f=='_'&&e=='_'&&h=='_')
		 {
			 c='o';
		 }
		  if(i=='o'&&f=='x'&&h=='x'&&c=='o'&&a=='_'&&b=='_'&&d=='_'&&e=='_')
		 {
			a='o';
			 
		 }
		 if(i=='o'&&c=='x'&&g=='o'&&a=='_'&&h=='x'&&b=='_'&&a=='_'&&d=='_'&&f=='_')
		 {
			 a='o';
		 }
		 if(i=='o'&&f=='x'&&g=='o'&&h=='x'&&e=='_'&&d=='_'&&a=='_')
		 {
			 a='o';
		 }
		if(i=='o'&&e=='x'&&g=='o'&&h=='x'&&c=='_'&&d=='_'&&a=='_')
		{
			a='o';
		}
		 if(g=='x'&&f=='x'&&a=='_'&&b=='_'&&d=='_'&&e=='_')
		 {
			 a='o';
		 }
		 
		  if(a=='x'&&b=='_'&&c=='_'&&d=='_'&&e=='_'&&f=='_'&&h=='_')
		  {
			g='o';

		   }
		 if(b=='x'&&a=='_'&&c=='_'&&d=='_'&&e=='_'&&f=='_'&&h=='_')
		  {
			g='o';

		   }
		 if(c=='x'&&b=='_'&&a=='_'&&d=='_'&&e=='_'&&f=='_'&&h=='_')
		  {
			g='o';

		   }
		 if(d=='x'&&b=='_'&&c=='_'&&a=='_'&&e=='_'&&f=='_'&&h=='_')
		  {
			g='o';

		   }
		if(e=='x'&&b=='_'&&c=='_'&&d=='_'&&f=='_'&&a=='_'&&h=='_')
		  {
			g='o';

		   }   
		 if(f=='x'&&b=='_'&&c=='_'&&d=='_'&&e=='_'&&a=='_'&&h=='_')
		  {
			g='o';

		   }
		 if(h=='x'&&b=='_'&&c=='_'&&d=='_'&&e=='_'&&f=='_'&&a=='_')
		  {
			c='o';

		   }
		if(i=='o'&&g=='o'&&b=='o'&&e=='x'&&h=='x'&&a=='x')
		{
			c='o';
		}
		if(i=='o'&&g=='o'&&b=='o'&&e=='x'&&h=='x'&&a=='b')
		{
			c='o';
		}
		 if(i=='o'&&g=='o'&&e=='x'&&h=='x'&&b=='o'&&c=='x')
		 {
			a='o';
		 }
		 if(c=='o'&&f=='x'&&i=='o'&&e=='x'&&h=='x'&&g=='o')
		{
			b='o'; 
			 gd=2; break;
		}
		
		 }
		
		
		}
		
	    //defencive hr
			if(gd!=2)
			{
			for(l=1;l==1;l++)
			{
		 if(a=='x'&&b=='x'&&c=='_')
		 {
			 c='o';
			 gd=1;
			 break;
		 }
		 if(b=='x'&&c=='x'&&a=='_')
		 {
			 a='o';
			 gd=1;
			 break;
		 }
		 if(d=='x'&&e=='x'&&f=='_')
		 {
			 f='o';
			 gd=1;
			 break;
		 }
		if(e=='x'&&f=='x'&&d=='_')
		 {
			 d='o';
			 gd=1;
			 break;
		 }
		if(d=='x'&&e=='x'&&f=='_')
		 {
			 f='o';
			 gd=1;
			 break;
		 }
		if(g=='x'&&h=='x'&&i=='_')
		 {
			 i='o';
			 gd=1;
			 break;
		 }
		if(i=='x'&&h=='x'&&g=='_')
		 {
			 g='o';
			 gd=1;
			 break;
		 }
		// defensive vr

		if(a=='x'&&d=='x'&&g=='_')
		 {
			 g='o';
			 gd=1;
			 break;
		 }
		if(g=='x'&&d=='x'&&a=='_')
		 {
			 a='o';
			 gd=1;
			 break;
		 }
		 if(b=='x'&&e=='x'&&h=='_')
		 {
			 h='o';
			 gd=1;
			 break;
		 }
		 if(h=='x'&&e=='x'&&b=='_')
		 {
			 b='o';
			 gd=1;
			 break;
		 }
		 if(c=='x'&&f=='x'&& i=='_')
		 {
			 i='o';
			 gd=1;
			 break;
		 }
		 if(f=='x'&&i=='x'&&c=='_')
		 {
			 c='o';
			 gd=1;
			 break;
		}
		 //defencive gap
		 if(a=='x'&&c=='x'&&b=='_')
		 {
			 b='o';
			 gd=1;
			 break;
		 }
		 if(a=='x'&&g=='x'&&d=='_')
		 {
			 d='o';
			 gd=1;
			 break;
		 }
		 if(a=='x'&&i=='x'&&e=='_')
		 {
			 e='o';
			 gd=1;
			 break;
		 }

		 if(d=='x'&&f=='x'&&e=='_')
		 {
			 e='o';
			 gd=1;
			 break;
		 }
		 if(b=='x'&&h=='x'&&e=='_')
		 {
			 e='o';
			 gd=1;
			 break;
		 }
		 if(g=='x'&&c=='x'&&e=='_')
		 {
			 e='o';
			 gd=1;
			 break;
		 }
		 if(g=='x'&&i=='x'&&h=='_')
		 {
				h='o';
				gd=1;
				break;
		 }
		  if(c=='x'&&i=='x'&&f=='_')
		 {
			 f='o';
			 gd=1;
			 break;
		}
			}
		
		}
		
		if(a=='_'&&b=='o'&&c=='x'&&d=='x'&&e=='x'&&f=='o'&&g=='o'&&h=='x'&&i=='o')
		{
			a='o';
			goto draw;
		}
		if(a=='x'&&b=='o'&&c=='_'&&d=='o'&&e=='x'&&f=='x'&&g=='o'&&h=='x'&&i=='o')
		{
			c='o';
			goto draw;
		}
		if(i=='o'&&h=='x'&&g=='o'&&f=='x'&&e=='x'&&d=='o'&&c=='x'&&b=='o'&a=='_')
		{
			a='o';
			w=2;
			goto win;
		}
	
		 clrscr();
		 
		if(a=='x'&&b=='x'&&c=='x'||d=='x'&&e=='x'&&f=='x'||g=='x'&&h=='x'&&i=='x'||a=='x'&&d=='x'&&g=='x'||b=='x'&&e=='x'&&h=='x'||c=='x'&&f=='x'&&i=='x'||a=='x'&&e=='x'&&i=='x'||c=='x'&&e=='x'&&g=='x')

		{       

			w=1;
			break;
		}
		if(a=='o'&&b=='o'&&c=='o'||d=='o'&&e=='o'&&f=='o'||g=='o'&&h=='o'&&i=='o'||a=='o'&&d=='o'&&g=='o'||b=='o'&&e=='o'&&h=='o'||c=='o'&&f=='o'&&i=='o'||a=='o'&&e=='o'&&i=='o'||c=='o'&&e=='o'&&g=='o')

		{

			w=2;
			break;
		}
		if((a=='x'||a=='o')&&(b=='x'||b=='o')&&(c=='x'||c=='o')&&(d=='x'||d=='o')&&(e=='x'||e=='o')&&(f=='x'||f=='o')&&(g=='x'||g=='o')&&(g=='x'||g=='o')&&(i=='x'||i=='o'))
		{
			goto draw;
		}

		}
		win:
		 if(w==2)
		 {	clrscr();
			printf("\n\n\n");
			printf("\t\t\t\t|%c||%c||%c|",a,b,c);
			printf("\n\t\t\t\t|%c||%c||%c|",d,e,f);
			printf("\n\t\t\t\t|%c||%c||%c|",g,h,i);
			printf("\n\n\n\n\n\t\t\t\t\tO Win");
		 }
		
		if(w==1)
		{	clrscr();
			printf("\n\n\n");
			printf("\t\t\t\t|%c||%c||%c|",a,b,c);
			printf("\n\t\t\t\t|%c||%c||%c|",d,e,f);
			printf("\n\t\t\t\t|%c||%c||%c|",g,h,i);
			printf("\n\n\n\n\n\t\t\t\t\t\tX Win");

		 }
		 draw:
		 if(w==0)
		 {	clrscr();
			printf("\n\n\n");
			printf("\t\t\t\t|%c||%c||%c|",a,b,c);
			printf("\n\t\t\t\t|%c||%c||%c|",d,e,f);
			printf("\n\t\t\t\t|%c||%c||%c|",g,h,i);
			printf("\n\n\n\n\n\t\t\t\t\tDraw");
		 }
		 quit:
		 getch();

 }
