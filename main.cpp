#include <vector>
#include <iostream>
#include <ftream>
using namespace std;

struct Tweet {
  int sentiment;
  int id;
  int date;
  string query;
  string user;
  string text;
  string tweet_length;
 };

 vector<Tweet> read_tweets(string filename) {
   vector<Tweet> tweets;
   ifstream file(filename);

   if (!file.is_open()) {
     cerr << "Error: Input file '" << path << "' not found" << endl;
     return tweets;
    }

    string line;
    while (getline(file, line)) {
      istringstream ss(line);
      vector<Tweet> tweets;
      Tweet tweet;

      getline(ss, line, ',');
      tweet.sentiment = stoi(line);

      getline(ss, line, ',');
      tweet.id = stoi(line);

      getline(ss, line, ',');
      tweet.date = stoi(line);

      getline(ss, tweet.query, ',');
      getline(ss, tweet.user, ',');
      getline(ss, tweet.tweet_length, ',');

      if (ss.peek() == '"') {
        getline(ss, tweet.text, '"');
        getline(ss, tweet.tweet_length, '"');
      }
      else {
          getline(ss, tweet.text, ',');
       }

      tweets.push_back(tweet);
    }
    return tweets;
 }

