class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };
    
    // CONSTRUCTOR

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge < 0){
            this->age = 0;
            cout<<"Age is not valid, setting age to 0."<<endl;
            
        }
        else{
            this->age = initialAge;
        }

    }
// TO ACCESS CLASS VARIABLES WE USE THIS->VAR_


    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if(this->age < 13){
            cout<<"You are young."<<endl;
            
        }
         else if(this->age >=18) {
            cout<<"You are old."<<endl;
        }
        else if(this->age >= 13 || this->age < 18){
           cout<< "You are a teenager."<<endl;
        }
 
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        this->age  =  this->age + 1;

    }
