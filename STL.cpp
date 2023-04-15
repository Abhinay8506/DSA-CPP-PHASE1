#include<bits/stdc++.h>
using namespace std;
int main()
{
    //pair
    pair<char,int>p={'a',1};
    cout<<p.first<<endl<<p.second;
    pair<int,char>arr[2]={make_pair(1,'a'),make_pair(2,'b')};
    cout<<arr[0].first<<endl<<arr[1].first;
    //cout<<arr[0]<<endl<<arr[1];  ERROR
    pair<int,int>qr(1,2);
    cout<<qr.first<<qr.second;
    //vector
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    cout<<v[1]<<v[0];
    vector<int>c={1,2};
    cout<<c[1]<<c[0];
    vector<int>q;
    q.emplace_back(5);
    q.push_back(7);
    cout<<q[0]<<q[1];
    q.erase(q.begin());
    cout<<q[0]<<q[1];
    //iterator
    /*vector<int>::iterator it=q.begin();
    cout<<*(it);
    it++;
    cout<<*it;*/
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it;
    }
    //LIST
    list<int>l;
    l.push_back(20);
    l.push_back(8);
    auto ite=l.end();
    l.insert(ite,10);
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it;
    }
    //DEQUE
    deque<int>dq;
    dq.push_back(9);
    dq.push_front(10);
    dq.push_front(12);
    dq.pop_front();
    dq.pop_back();
    cout<<dq[0];
    //STACK
    stack<int>st;
    st.push(70);
    st.push(9);
    st.pop();
    cout<<st.top();
    //QUEUE
    queue<int>qt;
    qt.push(17);
    qt.push(45);
    cout<<qt.front()<<qt.back();
    qt.pop();
    //priority queue
    priority_queue<int>pq;
    pq.push(90);
    pq.emplace(100);
    cout<<pq.top();
    //SET
    set<int>s;
    s.insert(3);
    s.insert(1);
    s.insert(1);
    for(auto itr=s.begin();itr!=s.end();itr++){
        cout<<*itr;
    }
    s.erase(2);
    //MULTISET
    multiset<int>mt;
    mt.insert(2);
    mt.insert(2);
    for(auto itre=mt.begin();itre!=mt.end();itre++) {
        cout<<*itre;
    }
    //MAP
    map<int,int>mp;
    mp[1]=10;
    mp.insert({2,20});
    mp.emplace(5,100);
    for(auto itree:mp){
        cout<<itree.first<<" "<<itree.second;
    }
        
    
}
