import javax.swing.JOptionPane;
import java.util.Scanner;

class Day_Cal
{
	public static void main(String args[])
	{
		String d,m,y;
		d=JOptionPane.showInputDialog("Enter Date");
		int date=Integer.parseInt(d);
		
		m=JOptionPane.showInputDialog("Enter Month");
		int month=Integer.parseInt(m);
		
		y=JOptionPane.showInputDialog("Enter Year");
		int year=Integer.parseInt(y);
		
		int flag=0,days;
		char c='y';
		int ltd=0,divi;
		int plus,reminder,sub;
		int rem,pop;
		
		exit:
		do
		{
			if(date<=0 || date>=32)
			{
				flag=1;
				break exit;
			}
			if(month<=0 || month>=13)
			{
				flag=1;
				break exit;
			}
			if(year<1000 || year>9999)
			{
				flag=1;
				break exit;
			}
			if(month==2)
			{
				if(year%100==0)
				{
					if(year%400==0)
					{
						if(month==2 && date>=30)
						{
							flag=1;
							break exit;
						}
						else
						  month=month+6;
					}
				}
				else if(year%4==0)
				{
					if(month==2 && date>=30)
					{
						flag=1;
						break exit;
					}
					else
					month=month+6;
				}
			}
				if(month==4 || month==6 || month==9 || month==11)
				{
					if(date>=31)
					{
						flag=1;
						break exit;
					}
				}

				if(month==2)
				{
					if(year%100!=0)
					{
						if(year%400!=0)
						{
							if(year%4!=0)
							{
								if(date>=29)
								{
									flag=1;
									break exit;

								}
								
							}
						}
					}
					
				}
		}while(c=='n');
			
			if(flag==1)
				System.out.println("Invalid Input");
			else
				
				ltd=year%100;
				divi=ltd/4;
				plus=divi+date;

				if(month==1 || month==10)
					plus=plus+1;

				if(month==2 || month==3 || month==11)
					plus=plus+4;
		
				if(month==4 || month==7)
					plus=plus+0;

				if(month==9 || month==12)
					plus=plus+6;

				if(month==5)
					plus=plus+2;

				if(month==6)
					plus=plus+5;

				if(month==8)
					plus=plus+3;

				reminder=year%100;
				sub=year-reminder;

				if(sub==1700)
					plus=plus+4;

				if(sub==1800)
					plus=plus+2;

				if(sub==1900)
					plus=plus-1;

				if(sub==2000)
					plus=plus+6;

				rem=year%1000;
				pop=year-rem;

				if(pop==2000)
					plus=plus+6;

					plus=plus+reminder;

					rem=plus%7;

			if(rem==0)
				JOptionPane.showMessageDialog(null,"The Day of "+d+"-"+m+"-"+y+" is Sunday");
				

			if(rem==1)
				JOptionPane.showMessageDialog(null,"The Day of "+d+"-"+m+"-"+y+" is Monday");

			if(rem==2)
				JOptionPane.showMessageDialog(null,"The Day of "+d+"-"+m+"-"+y+" is Tuesday");

			if(rem==3)
				JOptionPane.showMessageDialog(null,"The Day of "+d+"-"+m+"-"+y+" is Wednesday");

			if(rem==4)
				JOptionPane.showMessageDialog(null,"The Day of "+d+"-"+m+"-"+y+" is Thursday");

			if(rem==5)
				JOptionPane.showMessageDialog(null,"The Day of "+d+"-"+m+"-"+y+" is Friday");

			if(rem==6)
				JOptionPane.showMessageDialog(null,"The Day of "+d+"-"+m+"-"+y+" is Saturday");
	
	
	}
}
