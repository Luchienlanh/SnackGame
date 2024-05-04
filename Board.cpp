void print_title(){
	setcursor(0,0);
	setConsoleColour(consoleforeground::RED);
	cout<<"YOUR SCORE:                     ";
	if(time1==20)		cout<<"HIGH";
	else if(time1==50)	cout<<"MEDIUM";
	else if(time1==80)	cout<<"LOW";
	else 				{
		cout<<"Custom: ";
		setConsoleColour(consoleforeground::WHITE);
		cout<<time1<<" ms";
	}
	cout<<"\n";
	if(colour) {
		setConsoleColour(consolebackground::GRAY);
		for(int i=0;i<lenght+2;i++)
		cout<<" ";
		cout<<"\n";
		for(int i=0;i<width;i++){
			for(int j=0;j<lenght+2;j++){
				if(j==0  || j==lenght+1)	setConsoleColour(consolebackground::GRAY);
				else	 					setConsoleColour(consolebackground::BLACK);
				cout<<" ";
			}
			cout<<"\n";
		}
		setConsoleColour(consolebackground::GRAY);
		for(int i=0;i<lenght+2;i++)
		cout<<" ";
	}
	else{
		setConsoleColour(consoleforeground::RED);
		for(int i=0;i<lenght+2;i++)
		cout<<"-";
		cout<<"\n";
		for(int i=0;i<width;i++){
			for(int j=0;j<lenght+2;j++)
				if(j==0)				cout<<"|";
				else if(j==lenght+1)	cout<<"|";
				else 					cout<<" ";
			cout<<"\n";
		}
		for(int i=0;i<lenght+2;i++)
		cout<<"-";
	}
}