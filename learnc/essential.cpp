//
//  essential.cpp
//  learnc
//
//  Created by xiaobo on 2018/4/12.
//  Copyright © 2018年 xiaobo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <functional>
#include <map>
#include <set>
#include <iterator>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#define FILEPATH "/Users/xiaobo/Documents/learnc/learnc/a.txt"
#define NAMEPATH "/Users/xiaobo/Documents/learnc/learnc/names"
#define EVENPATH "/Users/xiaobo/Documents/learnc/learnc/even"
#define ODDPATH "/Users/xiaobo/Documents/learnc/learnc/odd"
using namespace std;
namespace chart3 {
    template <typename IteratorType, typename elemType>
    IteratorType
    myfind(IteratorType first, IteratorType last, const elemType& value) {
        while (first != last) {
            if (*first == value) {
                return first;
            }
            first++;
        }
        return last;
    };
    
    void common() {
        int arr[] = {1, 2, 3};
        vector<int> a(arr, arr+3);
        vector<int> b(arr, arr+3);
        if (a == b) {
            cout << "equal" << endl;
        } else {
            cout << "inequal" << endl;
        }
        cout << a.size() << endl;
        
    };
    
    void seque() {
        int ival;
        deque<int> q;
        while(cin >> ival) {
            q.push_back(ival);
            int curr = q.front();
        }
    }
    
    void add() {
//        list<int> arr = {1, 2, 3};
        vector<int> arr = {1, 2 ,3};
        vector<int>::iterator it = arr.end();
        arr.insert(it, 0);
        
        int ia1[7] = {1, 10, 2, 3, 4, 5, 55};
        
        list<int> ll(ia1, ia1+7);
        list<int>::iterator itll = ll.begin();
        list<int>::iterator p = ll.erase(itll, ++itll);
        cout << *p << endl;
    }
    
    bool is_elem(vector<int> ver, const int& ele) {
        int max = ver.size() > 0 ? ver[ver.size() - 1] : 0;
        if (max == ele) {
            return true;
        } else if (max > ele) {
            return binary_search(ver.begin(), ver.end(), ele);
        }
        return false;
    }
    
    void usea() {
        vector<int> vec = {1, 2, 3, 4, 5};
        bool result = is_elem(vec, 6);
        cout << result << endl;
    }
    
    void tt() {
        vector<int> vec = {1, 2, 3};
        vector<int> vec2 = {1, 1, 1};
        vector<int> result(2);
        transform(vec.begin(), vec.end(), vec.begin(), vec.begin(), multiplies<int>());
        cout << vec[1] << endl;
        cout << vec[2] << endl;
    }
    
    // algorithm function object
    
    template<typename InputIterator, typename OutputIterator, typename elemType, typename Comp>
    OutputIterator
    filter(InputIterator first, InputIterator last, OutputIterator out, const elemType& val, Comp pred) {
        while((first = find_if(first, last, bind2nd(pred, val))) != last) {
            cout << *first << endl;
            *out++ = *first++;
        }
        return out;
    }
    
    void runFilter() {
        int arr[] = {1, 2, 3};
        int arr_result[3];
        vector<int> svec = {1, 2, 3};
        vector<int> dvec;
//        filter(arr, arr+3, back_inserter(arr_result), 10, less<int>());
//        cout << arr_result[0] << endl;
//        cout << arr_result[1] << endl;
//        cout << arr_result[2] << endl;
        
        
        filter(svec.begin(), svec.end(), back_inserter(dvec), 10, less<int>());
        cout << dvec[0] << endl;
    }
    
    // map
    void runMap() {
        map<string, int> words;
        words["one"] = 1;
        // 迭代map
        map<string, int>::iterator it = words.begin();
        for(; it != words.end(); it++) {
            cout << it -> first << endl;
            cout << it -> second << endl;
        }
        
        //map.find return iterator of map
        /*
        int count = 0;
        map<string,int>::iterator it;
        it = words.find("vermeer");
        if (it != words.end())
            count = it->second;
        */
    }
    
    void runSet() {
        int ia[4] = {3, 2, 2, 2};
        // set include delete the same value and sort
        set<int> iset(ia, ia+4);
        iset.insert(5);
        iset.insert(1);
        set<int>::iterator it = iset.begin();
        for(; it != iset.end(); it++) {
            cout << *it << endl;
        }
    }
    
    void runCopy() {
        vector<int> vec = {1, 2, 3};
        vector<int> vec2;
        vector<int> vec3 = {4, 5};
        copy(vec.begin(), vec.end(), back_inserter(vec2));
        copy(vec.begin(), vec.end(), inserter(vec3, vec3.end()));
        cout << vec2[0] << endl;
        cout << vec3[0] << endl;
        cout << vec3[1] << endl;
    }
    
    void runEcho() {
        vector<string> words;
//        string inwords;
        char inwords[20];
        while(gets(inwords) && inwords[0] != '\0') {
            words.push_back(inwords);
        }
        
        sort(words.begin(), words.end());
        vector<string>::iterator it = words.begin(),
        end = words.end();
        
        for(; it != end; ++it) {
            cout << *it << endl;
        }
    }
    
    void runEchoByStl() {
        istream_iterator<string> is(cin);
        istream_iterator<string> eof;
        
        vector<string> text;
        copy(is, eof, back_inserter(text));
        
        sort(text.begin(), text.end());
        ostream_iterator<string> os(cout, " ");
        copy(text.begin(), text.end(), os);
    }
    
    void runExe1() {
        set<string> excludeStr = {
            "a",
            "an",
            "or",
            "the",
            "and",
            "but"
        };
        map<string, int> textMap;
        
        ifstream ifile(FILEPATH);
        string word;
        
        if(ifile) {
            while(ifile >> word) {
                cout << word << endl;
            }
        }
        
        char a;
        char b[100];
        int index = 0;
        
        FILE * p;
        if ((p = fopen("/Users/xiaobo/Documents/learnc/learnc/a.txt", "r")) == NULL) {
            cout << "failed to open file" << endl;
        }
        a = getc(p);
        while(a != EOF) {
            if (a < 'A' || a > 'z' || a == ' ' ) {
                b[index] = '\0';
                
                if (true) {
                    if (textMap[b] > 0) {
                        textMap[b] += 1;
                    } else {
                        textMap[b] = 1;
                    }
                }
                index = 0;
            } else {
                b[index] = a;
                index++;
            }
            a = getc(p);
        }
        
        map<string, int>::iterator it = textMap.begin();
        cout << "show result" << endl;
        for(; it != textMap.end(); ++it) {
            cout << it->first << endl;
            cout << it->second << endl;
        }
    }
    
    bool compareStr(const string& str1, const string& str2) {
        return str1.size() < str2.size();
    }
    
    int compareStr2(const void* str1, const void* str2) {
        const char* p1 = (char*) str1;
        const char* p2 = (char*) str2;
        int a = (int) strlen(p1) - strlen(p2);
        return a;
    }
    
    void runExe2() {
        vector<char*> textVec;
        ifstream ifile(FILEPATH);
        char word[100];
        char words[1000][100];
        int i = 0;
        if(!ifile) {
            cout << "failed to open file" << endl;
            return;
        }
        
        while(ifile >> word) {
            strcpy(words[i], word);
            i++;
        }
        
        qsort(words, i, 100, compareStr2);
        
        for(int j = 0; j < i; j++) {
            cout << words[j] << endl;
        }
    }
    
    void runExe3 () {
        char line[100];
        char ch;
        int i = 0;
        vector<string> lineName;
        map<string, vector<string>> names;
        FILE* fp;
        if ((fp = fopen(NAMEPATH, "r")) == NULL) {
            cout << "Error to open file" << endl;
            return;
        }
        
        while((ch = getc(fp)) != EOF) {
            if (ch == ' ') {
                char temp[100];
                line[i] = '\0';
                strcpy(temp, line);
                cout << line << endl;
                lineName.push_back(temp);
                i = 0;
            } else if (ch == '\n') {
                char temp[100];
                line[i] = '\0';
                strcpy(temp, line);
                lineName.push_back(temp);
                vector<string> tempv;
                vector<string>::iterator it = lineName.begin(),
                                        end = lineName.end();
                for(it++; it != end; ++it) {
                    tempv.push_back(*it);
                }
                
                names[lineName[0]] = tempv;
                lineName.clear();
                i = 0;
            } else {
                line[i] = ch;
                i++;
            }
        }
        cout << names["Kim"][0] << endl;
    }
    
    
    bool forExeC(int v1, int v2) {
        return v1 % v2 == 0;
    }
    
    void runExe4() {
        istream_iterator<int> it(cin);
        vector<int> de;
        vector<int> odd;
        vector<int> even;
        istream_iterator<int> eof;
        copy(it, eof, back_inserter(de));
//        filter(de.begin(), de.end(), back_inserter(odd), 2, forExeC);
        
//        cout << odd[1] << endl;
        
        vector<int>::iterator start = de.begin(),
                              end = de.end();
        
        for(; start != end; start++) {
            if (*start % 2 == 0) {
                even.push_back(*start);
            } else {
                odd.push_back(*start);
            }
        }
        ofstream oddFile(ODDPATH);
        ofstream evenFile(EVENPATH);
        
        ostream_iterator<int> oddout(oddFile, " ");
        ostream_iterator<int> evenout(evenFile, "\n");
        
        copy(odd.begin(), odd.end(), oddout);
        copy(even.begin(), even.end(), evenout);
        
        
//        cout << de[2] << endl;
    }
}

namespace chart4 {
    class Stack {
        public:
            bool push(const string&);
            bool pop(string& elem);
            bool peek(string& elem);
            bool empty();
            bool full();
            bool find(const string& elem);
            int count(const string& elem);
            // inline member function
            int size() {
                return (int) _stack.size();
            };
        private:
            vector<string> _stack;
    };
    
    inline bool Stack::empty() {
        return _stack.empty();
    }
    
    bool Stack::pop(string& elem) {
        if (_stack.empty()) {
            return false;
        }
        
        elem = _stack.back();
        _stack.pop_back();
        return true;
    }
    
    bool Stack::push(const string& str) {
        if (full()) {
            return false;
        }
        _stack.push_back(str);
        return true;
    }
    
    bool Stack::full() {
        return _stack.size() == _stack.max_size();
    }
    
    bool Stack::peek(string& str) {
        if (empty())
            return false;
        str = _stack.back();
        return true;
    }
    
    bool Stack::find(const string& str) {
        vector<string>::iterator it = _stack.begin(),
                                 end = _stack.end();
        
        return ::find(it, end, "aa") != end;
    }
    
    int Stack::count(const string& str) {
        vector<string>::iterator start = _stack.begin(),
                                 end = _stack.end();
        return (int)::count(start, end, str);
    }
    
    void runStack() {
        Stack test;
        test.push("ss");
        test.push("aa");
        test.push("aa");
        test.push("aa");
        bool a = test.find("as");
        int b = test.count("aa");
        cout << a << endl;
        cout << b << endl;
    }
    
    class Triangular {
        public:
        Triangular();
        Triangular(int len, int beg_pos);
        void getName();
        int length() const { return _length; };
        int beg_pos() const { return _beg_pos; };
        int elem(int pos) const;
        bool next(int &val) const;
        void next_reset() const {
            _next = _beg_pos - 1;
        };
        void getSize() {
            cout << size << endl;
        };
        Triangular& copy(const Triangular& rhs) {
            if (this != &rhs) {
                _length = rhs._length;
                _beg_pos = rhs._beg_pos;
                _next = rhs._beg_pos-1;
            }
            return *this;
        };
        static bool is_elem(const int& v) {
            if (_elems.size() == 0) {
                return false;
            }
            
            vector<int>::iterator it = _elems.begin(),
                                  end = _elems.end();
            return find(it, end, v) != end;
        };
        private:
            string name;
            int _length;
            int _beg_pos;
            mutable int _next;
            static int size;
            static vector<int> _elems;
    };
    
    Triangular::Triangular() {
        _length = 1;
        _beg_pos = 1;
        _next = 0;
    }
    
    Triangular::Triangular(int len, int bp): name("jaja") {
        _length = len;
        _beg_pos = bp;
        _next = len - 1;
    }
    
    int Triangular::size = 8;
    vector<int> Triangular::_elems = {1, 2, 3};
    
    void Triangular::getName() {
        cout << name << endl;
    }
    
    int Triangular::elem(int pos) const {
        return _elems[pos-1];
    }
    
    bool Triangular::next(int& val) const {
        if (_next < _beg_pos + _length - 1) {
            val = _elems[_next++];
            return true;
        }
        return false;
    }
    
    
    void runTri() {
        // it define a function return Tri
        // Triangular t5();
        
//        Triangular t(8, 3);
        
        // automatically copy
//        Triangular t2 = t;
//        t2.getName();
        Triangular t;
        t.getSize();
        cout << Triangular::is_elem(5) << endl;
        
        
        
    }
    
    class Martix {
    public:
        Martix(){};
        Martix(int rows, int cols): _rows(rows), _cols(cols) {
            _pmt = new double[rows * cols];
        }
        
        Martix(const Martix& mat): _rows(mat._rows), _cols(mat._cols) {
            _pmt = new double[_cols * _rows];
        }
        
        ~Martix() {
            // clear the data _pmt pointer;
            delete [] _pmt;
        }
        
        int getCols() const {
            return _cols;
        }
        
        int getRows() const {
            return _rows;
        }
        
        
        
    private:
        int _cols;
        int _rows;
        double* _pmt;
    };
    
    void runMartix() {
        Martix mat(4, 4);
        // pointer can be arrenage automaticlly
        Martix mat2 = mat;
        mat2.getCols();
    }
    
    class Less_Than {
    public:
        Less_Than(int val): _val(val) {};
        bool operator() (int value);
    private:
        int _val;
    };
    
    bool Less_Than::operator() (int value) {
        return value < _val;
    }
    
    void runLessThan() {
        Less_Than less(3);
        vector<int> num = {1, 2, 3, 4};
        vector<int>::iterator it = num.begin(),
                              end = num.end();
        for(; it != end; it++) {
            if (less(*it)) {
                cout << *it << endl;
            }
        }
    }
    
    ostream& operator<<(ostream& os, const Martix& martix) {
        os << "cols:" << martix.getCols();
        os << "rows:" << martix.getRows();
        return os;
    }
    
    istream& operator>>(istream& is, Martix& martix) {
        int cols, rows;
        is >> rows
        >> cols;
        
        Martix temp(rows, cols);
        Martix m2 = temp;
        return is;
    }
    
    void runOut() {
        Martix a(10, 29);
        Martix b(1, 1);
        cin >> b;
        cout << a << endl;
    }
    
    class num_squence {
    public:
        typedef void (num_squence::*PtrType) (int);
        void fibonacci(int);
        void pell(int);
    private:
        vector<int>* _elem;
        PtrType _pmf;
        static const int num_seq = 7;
        static PtrType func_tbl[num_seq];
        static vector<vector<int>> seq;
    };

    class UserProfile {
    public:
        enum LEVEL { beginner, intermediate, advanced, guru };
        UserProfile();
        UserProfile(string name, LEVEL l = advanced);
        string getUsername() const {
            return _username;
        };
        string getLevel() const {
            return _levelVec[_currentLevel];
        };
        unsigned int getLogged() const {
            return _logged;
        };
        unsigned int getGuessed() const {
            return _guessed;
        };
        unsigned int getCorrect() const {
            return _correct;
        };
        float getPrecentage() const {
            if (_guessed > 0) {
                return (float) _correct/_guessed;
            } else {
                return 0;
            }
        };
        void bump_guess_count(unsigned int c) {
            _guessed = c;
        };
        
        void bump_guess_correct(unsigned int c) {
            _correct = c;
        };
        
        void bump_login_count() {
            _logged++;
        };
        
        void showLevelMap() {
            map<string, LEVEL>::iterator it = _levelMap.begin(),
            end = _levelMap.end();
            
            for(; it != end; ++it) {
                cout << it -> first << endl;
                cout << it -> second << endl;
            }
        };
        
        void resetLevel(string&);
        void resetLevel(LEVEL l) {
            _currentLevel = l;
        };
        void resetName(string& name) {
            _username = name;
        };
        
        void resetLogged(unsigned int n) {
            _logged = n;
        };
        
        void resetGuess(unsigned int n) {
            _guessed = n;
        };
        
        void resetCorrect(unsigned int n) {
            _correct = n;
        };
        bool operator==(const UserProfile& a);
        bool operator!=(const UserProfile& a);
    private:
        string _username;
        unsigned int _logged;
        unsigned int _guessed;
        unsigned int _correct;
        LEVEL _currentLevel;
        float _precentage;
        static map<string, LEVEL> _levelMap;
        static vector<string> _levelVec;
        static void init_level_map();
    };
    
    UserProfile::UserProfile(): _username("guest"), _currentLevel(beginner), _logged(1), _guessed(3), _correct(1) {
        
        
    }
    
    UserProfile::UserProfile(string name, UserProfile::LEVEL l): _username(name), _currentLevel(l), _logged(1), _guessed(0), _correct(0) {
        
    }
    
    vector<string> UserProfile::_levelVec = {"beginner", "intermediate", "advanced", "guru"};
    map<string, UserProfile::LEVEL> UserProfile::_levelMap;
    
    void UserProfile::init_level_map() {
        _levelMap["beginner"] = beginner;
        _levelMap["intermediate"] = intermediate;
        _levelMap["advanced"] = advanced;
        _levelMap["guru"] = guru;
    }
    
    void UserProfile::resetLevel(string& l) {
        map<string, LEVEL>::iterator it;
        if (_levelMap.empty()) {
            init_level_map();
        }
        
        _currentLevel = ((it = _levelMap.find(l)) != _levelMap.end()) ? it->second : beginner;
    }
    
    bool UserProfile::operator==(const UserProfile& r) {
        return _username == r.getUsername();
    }
    
    bool UserProfile::operator!=(const UserProfile& r) {
        return _username != r.getUsername();
    }
    
    
    
    ostream& operator<<(ostream& os, const UserProfile& u) {
        os << u.getUsername() << "  " << u.getLevel() << "  " << u.getLogged() << "  " << u.getGuessed() << "   " << u.getCorrect() << "  " << u.getPrecentage() << "\n";
        return os;
    }
    
    istream& operator>>(istream& is, UserProfile& u) {
        string name;
        string level;
        unsigned int logged;
        unsigned int guessed;
        unsigned int correct;
        
        is >> name >> level;
        scanf("%u%u%u", &logged, &guessed, &correct);
        
        cout << name << level << logged << guessed << correct << endl;
        
        u.resetName(name);
        u.resetLevel(level);
        u.resetGuess(guessed);
        u.resetCorrect(correct);
        u.resetLogged(logged);
        
        
        
        
        return is;
    }
    
    void runExe4() {
        UserProfile a;
        UserProfile b("guest2", UserProfile::beginner);
        UserProfile c;
        cout << a;
        cout << b;
        
        a.bump_guess_count(27);
        a.bump_guess_correct(25);
        a.bump_login_count();
        cout << a;
        cin >> c;
        cout << c;
        string name = "guest2";
//        a.resetName(name);
        if (a != b) {
            cout << "equal" << endl;
        } else {
            cout << "not equal" << endl;
        }
        
        
    }
    
    
    
    
    
    
    
}

using namespace chart4;

//int main() {
//    runExe4();
//    return 0;
//}


























