bool check_interbody_death(){
	int x,y,i;
	bool j=0;
	x=snake[snake.end()-snake.begin()-2];
	y=snake.back();
	for(i=0;i<snake.size()-2;i=i+2){
		if(x==snake[i] && y==snake[i+1]){
			j=1;
			break;
		}
	}
	return j;
}
