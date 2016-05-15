typedef struct {
	int x, y; // location on screen
	u16* gfx[5];
	u8* tileSheet;
	bool shouldDisplay;
	u8* iconLocation;
	void (*stylus)();
} Menu;

Menu initMenu();
void displayMenu(Menu * menu, bool hideMenu);
void stylusTouch(Menu * menu, touchPosition * touch);