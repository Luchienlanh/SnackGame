void pause_menu(){
	if(colour){
		setcursor(1,(width-5)/2+2);
		setConsoleColour(consolebackground::WHITE);
		for(int i=0;i<lenght;i++) 						cout<<" ";
		setcursor(1,(width-5)/2+3);
		for(int i=0;i<(lenght-11)/2;i++) 				cout<<" ";
		cout<<"GAME PAUSED";
		for(int i=0;i<lenght-11-(lenght-11)/2;i++)		cout<<" ";
		setcursor(1,(width-5)/2+4);
		for(int i=0;i<lenght;i++) 						cout<<" ";
		setcursor(1,(width-5)/2+5);
		for(int i=0;i<(lenght-21)/2;i++) 				cout<<" ";
		cout<<"PRESS 'P' TO CONTINUE";
		for(int i=0;i<lenght-21-(lenght-21)/2;i++) 		cout<<" ";
		setcursor(1,(width-5)/2+6);
		for(int i=0;i<lenght;i++) 						cout<<" ";
	}
	else{//character
		setConsoleColour(consoleforeground::WHITE);
		setcursor((lenght-9)/2,(width-1)/2+1);
		cout<<"GAME PAUSED";
		setcursor((lenght-19)/2,(width-1)/2+3);
		cout<<"PRESS 'P' TO CONTINUE";
	}
}
