void settings(){
	system("cls");
	setConsoleColour(consoleforeground::DARKYELLOW);
	int a=10,i,j;
	cout<<"\nEnter your choice seperated by spaces and press enter (1 1 -> changes mode to colour)\n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);
	cout<<"1. Choose Mode-\n";
	setConsoleColour(consoleforeground::GRAY);
	cout<<"1. Colour    2. Characters \n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);
	cout<<"2. Choose Difficulty";
	setConsoleColour(consoleforeground::GRAY);
	cout<<"\n1. Easy      2. Medium         3. Hard      4. Custom (enter time in millisecons)     \n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);
	cout<<"3. Want to pass through walls";
	setConsoleColour(consoleforeground::GRAY);
	cout<<"\n1. Yes       2. No\n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);
	cout<<"4. Set the dimensions of BOARD \n";
	setConsoleColour(consoleforeground::GRAY);
	cout<<"Enter height and width- '25 100'    If there is problem in printing then try decreasing the size, Default-27 118\n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);
	cout<<"5. Die by hitting your own body\n";
	setConsoleColour(consoleforeground::GRAY);
	cout<<"1. Yes       2. No\n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);
	cout<<"6. Do you want to go reverse (if allowed then snake will not die by touching its own body)\n";
	setConsoleColour(consoleforeground::GRAY);
	cout<<"1. Yes       2. No\n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);
	cout<<"7. Back\n\n";
	setConsoleColour(consoleforeground::WHITE);
	while(a!=7){
		cin>>a;
		if(a==1){
			cin>>i;
			if(i==1)		colour=1;
			else if(i==2)	colour=0;
			else			cout<<"Enter correct choice\n";
			cout<<"Done succesfully\n";
		}
		else if(a==2){
			cin>>i;
			if(i==1)		j=80;
			else if(i==2)	j=50;
			else if(i==3)	j=20;
			else if(i==4)	cin>>j;
			else			cout<<"Enter correct choice\n";
			time1=j;
			cout<<"Done succesfully\n";
		}
		else if(a==3){
			cin>>i;
			if(i==1)		kids=1;
			else if(i==2)	kids=0;
			else			cout<<"Enter correct choice\n";
			cout<<"Done succesfully\n";
		}
		else if(a==4){
			cin>>i>>j;
			lenght=j;
			width=i;
			cout<<"Done succesfully\n";
		}
		else if(a==5){
			cin>>i;
			if(i==1)		self_hit=1;
			else if(i==2)	self_hit=0;
			else			cout<<"Enter correct choice\n";
			cout<<"Done succesfully\n";
		}
		else if(a==6){
			cin>>i;
			if(i==1)		reverse_snake=1;
			else if(i==2)	reverse_snake=0;
			else			cout<<"Enter correct choice\n";
			cout<<"Done succesfully\n";
		}
		else if(a!=7)		cout<<"Enter correct choice\n";
	}
}
