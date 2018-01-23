//aggie_pic class implementation

#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"
#include "GUI.h"
#include "aggie_pic.h"

namespace aggie_pic {

 aggie_pic::aggie_pic(Image ii, vector<bool>& v, Menu tags_buttons, const string& ag_name) 
    : i{ii}, tags{v}, name{ag_name},
   tags_buttons{Point{x_max() - 20,50}, 20, 20, Menu::vertical, "tags"}
   {
   tags_buttons.attach(new Button{Point(0,0),0,0,"Family",cb_family});                     //creating the actual buttons and menu
   tags_buttons.attach(new Button{Point(0,0),0,0,"Friends",cb_friends});
   tags_buttons.attach(new Button{Point(0,0),0,0,"Aggieland",cb_aggieland});
   tags_buttons.attach(new Button{Point(0,0),0,0,"Pets",cb_pets});
   tags_buttons.attach(new Button{Point(0,0),20,20,"Vacation",cb_vacation});

   for(int i=0; i<5; ++i) {               //initializing all tags to false
      tags.push_back(false);
   }
} //constructor
   
 void puttags(int x, vector<bool>& tags) {
      if (tags[x] == true)
	     tags[x] = false;
	  else 
         tags[x] = true;	  
   }

   
 void puttags(int x, vector<bool>& tags) {
      tags[x] = true;
   }
   
void cb_family(Address, Address pw)
	{
	   reference_to<aggie_pic>(pw).family_pressed();
	}
void cb_friends(Address, Address pe)
	{
	   reference_to<aggie_pic>(pe).friends_pressed();
	}
void cb_aggieland(Address, Address pr)
	{
	   reference_to<aggie_pic>(pr).aggieland_pressed();
	}
void cb_pets(Address, Address pt)
	{
	   reference_to<aggie_pic>(pt).pets_pressed();
	}
void cb_vacation(Address, Address py)
	{
	   reference_to<aggie_pic>(py).vacation_pressed();
	}
	
} //namespace
