template <class C>
class GenClass{
    public:
        inline GenClass(){
            theValue = NULL;
        }
        inline GenClass(C data){
            theValue = data;
        }

        C getTheValue(){
            return theValue;
        }

        void setTheValue(C data){
            theValue = data;
        }
    protected:
        C theValue;
};