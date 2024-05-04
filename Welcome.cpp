void welcome_to(){
	system("cls");
	setConsoleColour(consoleforeground::BLUE);
	int a;
	bool t=1;
	cout<<"\n\n\n\n\n\n\n\n\n                                       WELCOME TO OUR SNAKE GAME\n\n";
	cout<<"                         Press S to open setting, any other key to  continue\n";
	cout<<"                              Press 'P' to pause the game\n";
	cout<<"                               Press 'C' to end the game";
	a=getch();
	if(a==115  || a==83){
		settings();
		welcome_to();
	}
}