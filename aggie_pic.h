
namespace aggie_pic {
   
 // the class for the actual image and tags combined

struct aggie_pic {
    aggie_pic(){};           //default constructor
   aggie_pic(Image i , vector<bool>& v, Menu tags_buttons, const string& name);       //constructor
   
   void puttags(int x, vector<bool>& tags);   //creating a function to change the status of a tag
   
   void cb_family(Address,Address pw); 
   void cb_friends(Address,Address pe); 
   void cb_aggieland(Address,Address pr); 
   void cb_pets(Address,Address pt); 
   void cb_vacation(Address,Address py); 
   
   void family_pressed(){                 //the active functions have two parts, store in the vector and mark the screen 
      puttags(0,tags);
      //mark
   }
   void friends_pressed(){ 
      puttags(1,tags);
      //mark
   }
   void aggieland_pressed(){
      puttags(2,tags);
      //mark
   }
   void pets_pressed() {
      puttags(3,tags);
      //mark
   }
   void vacation_pressed() { 
      puttags(4,tags);
      //mark
   }

   private:
      Image i;
	  Menu tags_buttons;
	  const string& name;
	  vector<bool> tags;                 //initializing a vector to store the tags
	  

	  

	  
};

} //namespace

