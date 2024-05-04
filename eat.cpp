void eat_food(){
	food_x=rand()%(width);
	food_y=rand()%(lenght);
	setcursor(food_y+1,food_x+2);
	if(colour){
		setConsoleColour(consolebackground::GREEN);
		cout<<" ";
	}
	else{
		setConsoleColour(consoleforeground::GREEN);
		cout<<"o";
	}
	snake.insert(snake.begin(),snake[1]);
	snake.insert(snake.begin(),snake[1]);
}
