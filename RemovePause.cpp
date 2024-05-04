void remove_pause(){
	if(colour){
		setcursor(1,(width-5)/2+2);
		setConsoleColour(consolebackground::BLACK);
		for(int i=0;i<5;i++){
			setcursor(1,(width-1)/2+i);
			for(int j=0;j<lenght;j++)					cout<<" ";
		}
	}
	else{
		setcursor((lenght-9)/2,(width-1)/2+1);
		cout<<"         ";
		setcursor((lenght-19)/2,(width-1)/2+3);
		cout<<"                     ";
	}
	setcursor(food_y+1,food_x+2);
	if(colour){
		setConsoleColour(consolebackground::GREEN);
		cout<<" ";
	}
	else{
		setConsoleColour(consoleforeground::GREEN);
		cout<<"o";
	}
}
