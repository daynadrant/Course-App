#include "friend_data.h"

FriendData::FriendData() {}

void FriendData::clear()
{
    this->friends.clear();
}

void FriendData::addFriend(const QString& username,
               RankType rank,
               int studyHours)
{
    this->friends.push_back(Friend(username, rank, studyHours));
}

