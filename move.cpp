void move_snake(int move,char direction){
	int i,j;
	if(direction=='v'){
		snake.push_back(snake[snake.end()-2-snake.begin()]+move);
		snake.push_back(snake[snake.end()-2-snake.begin()]);
	}
	else{
		snake.push_back(snake[snake.end()-2-snake.begin()]);
		snake.push_back(snake[snake.end()-2-snake.begin()]+move);
	}
	setcursor(snake[1]+1,snake[0]+2);
	if(colour) 				setConsoleColour(consolebackground::BLACK);
	cout<<" ";
	snake.erase(snake.begin());
	snake.erase(snake.begin());

	if(snake.back()==lenght && kids)										snake.back()-=lenght;
	else if(snake.back()==-1 && kids)										snake.back()+=lenght;
	else if(snake[snake.end()-snake.begin()-2]==-1 && kids)					snake[snake.end()-snake.begin()-2]+=width;
	else if(snake[snake.end()-snake.begin()-2]==width && kids)				snake[snake.end()-snake.begin()-2]-=width;

	setcursor(snake.back()+1,snake[snake.end()-snake.begin()-2]+2);
	
}
