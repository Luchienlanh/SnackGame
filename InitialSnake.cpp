void initialise_snake(){
	snake.clear();
	for(int i=0;i<2;i++){
		snake.push_back(0);
		snake.push_back(i);
	}
}
