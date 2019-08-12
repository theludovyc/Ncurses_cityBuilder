ITEM **my_items;
MENU *my_menu;

void onInit(){
	my_items = (ITEM **)calloc(3, sizeof(ITEM *));

	my_items[0] = new_item("Cx 1", "Choix 1");
	my_items[1] = new_item("Cx 2", "Choix 2");
	my_items[2] = (ITEM *)NULL;

	my_menu = new_menu(my_items);

	set_menu_format(my_menu, 2, 1);

	post_menu(my_menu);
	refresh();
}

void onKey(int key){
	switch(key){
		case KEY_DOWN:
		  menu_driver(my_menu, REQ_NEXT_ITEM);
			break;
		case KEY_UP:
			menu_driver(my_menu, REQ_PREV_ITEM);
			break;
	}
}

void onUpdate(){

}

void onExit(){
	unpost_menu(my_menu);
	free_menu(my_menu);
	free_item(my_items[0]);
	free_item(my_items[1]);
	free_item(my_items[2]);
}