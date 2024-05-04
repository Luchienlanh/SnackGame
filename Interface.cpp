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

void print_highscore(){
	int i,j;
	setcursor(11,0);
	setConsoleColour(consoleforeground::WHITE);
	cout<<snake.size()/2-3<<"  ";
}

int print_final_message(){
	setConsoleColour(consoleforeground::BLACK);
	system("cls");
	setConsoleColour(consoleforeground::MAGENTA);
	int a=snake.size()/2-3,k;
	if(a>hsc)
	hsc=a;
	cout<<"\n\n\n\n\n               GAME OVER\n";
	cout<<"               YOUR SCORE: "<<snake.size()/2-3<<endl;
	cout<<"               HIGH SCORE EVER: "<<hsc;
	cout<<endl<<endl<<endl;
	cout<<"               PRESS ANY KEY TO RESTART\n";
	cout<<"               Press S to open settings\n";
	cout<<"               ESC to EXIT\n\n\n\n\n\n";
	setConsoleColour(consoleforeground::DARKYELLOW);

	a=getch();
	return a;
}