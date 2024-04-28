#include <iostream>

using namespace std;

 class Squirrel{
        private:
        string name;

        public:
        Squirrel(){

        }
        Squirrel(string name){
            this->name = name;
        }
        
        string get_name(){
            return this->name;
        }
    };

    class Tree{
        private:
        Squirrel data;
        Tree *left;
        Tree *right;

        public:
        Tree(Squirrel *data){
            this->data = *data;
        }

        void set_left(Tree *left){
            this->left = left;
        }

        void set_right(Tree *right){
            this->right = right;
        }

        Squirrel get_data(){
            return this->data;
        }

        Tree* get_left(){
            return this->left;
        }
        Tree* get_right(){
            return this->right;
        }
        
    };

    void traverse(Tree* root){
        if(root != NULL){
            cout << root->get_data().get_name() << " ";
            traverse(root->get_left());
            traverse(root->get_right());
        }
    }


int main(){

    Squirrel cheeks = Squirrel("Cheeks");
    Tree* node_one = new Tree(&cheeks);

    Squirrel squeaks = Squirrel("Squeaks");
    Tree* node_two = new Tree(&squeaks);

    Squirrel fluff = Squirrel("Fluff");
    Tree* node_three = new Tree(&fluff);

    Squirrel ratatoskr = Squirrel("Ratatoskr");
    Tree* node_four = new Tree(&ratatoskr);

    Squirrel sandy = Squirrel("Sandy");
    Tree* node_five = new Tree(&sandy);

    

    node_one->set_left(node_two);
    node_one->set_right(node_three);
    node_three->set_left(node_four);
    
    node_one->get_left()->set_right(node_five);

    traverse(node_three);

    Tree retrieved_node = *node_one->get_left();

    cout << "\n\n";

    cout << retrieved_node.get_data().get_name();

    cout << endl;
   
    return 0;
}
