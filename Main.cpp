int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	srand(time(0));
	hidecursor();
	welcome_to();
	restart_game:
		food_eaten=1;
		system("cls");
		print_title();
		initialise_snake();
		eat_food();
		int i1=80,i2=80;
		while(i1!=99){
			if(kbhit()){
				i1=getch();
				if(i1==72 && (i2!=80 || reverse_snake))				i2=i1,move_snake(-1,'v');
				else if(i1==80 && (i2!=72 || reverse_snake))			i2=i1,move_snake(1,'v');
				else if(i1==75 && (i2!=77 || reverse_snake))			i2=i1,move_snake(-1,'h');
				else if(i1==77 && (i2!=75 || reverse_snake))			i2=i1,move_snake(1,'h');
				else if(i1==112){
					pause_menu();
					while(1){
						i1=getch();
						if(i1==112)
						break;
					}
					remove_pause();
				}
				else 								goto congo;
			}
			else{
				congo:
				if(i2==72 )							move_snake(-1,'v');
				else if(i2==80)						move_snake(1,'v');
				else if(i2==75)						move_snake(-1,'h');
				else if(i2==77)						move_snake(1,'h');
			}
			if(check_interbody_death() && !reverse_snake && self_hit)																				break;
			if(snake.back()>lenght-1 || snake.back()<0 || snake[snake.end()-snake.begin()-2]<0 || snake[snake.end()-snake.begin()-2]>width-1)		break;
			if(food_y==snake.back() && food_x==snake[snake.end()-2-snake.begin()])																	eat_food();
			print_highscore();
			Sleep(time1);
		}
		int result;
		print_final:
			result=print_final_message();
			if(result==115  || result==83){
				settings();
				goto print_final;
			}
			else if(result!=27)
				goto restart_game;
}
