class Solution
{
public:
	vector<string> letterCombinations(string digits)
	{
		vector<string> ans;
		if (digits == "")
			return ans;
		map<char, string> mp;
		mp['2'] = "abc";
		mp['3'] = "def";
		mp['4'] = "ghi";
		mp['5'] = "jkl";
		mp['6'] = "mno";
		mp['7'] = "pqrs";
		mp['8'] = "tuv";
		mp['9'] = "wxyz";
		for (char i : mp[digits[0]])
		{   
			if (digits.size() > 1)
			{
				for (char  j : mp[digits[1]])
				{   
					if (digits.size() > 2)
					{
						for (char  k : mp[digits[2]])
						{   cout<<k<<endl;
							if (digits.size() > 3)
							{
								for (char  l : mp[digits[3]])
								{
									string temp = "";
									temp += i ;
                                    temp += j ;
                                temp += k;
                                temp += l;
									ans.push_back(temp);
								}
							}
							else
							{
								string temp = "";
								temp += i ;
                                temp += j;
                                temp += k;
								ans.push_back(temp);
							}
						}
					}
					else
					{
						string temp = "";
						temp += i;
                        temp += j;
                        cout<<temp<<endl;
						ans.push_back(temp);
					}
				}
			}

			else
			{
				string temp = "";
				temp = i;
				ans.push_back(temp);
			}
		}
		return ans;
	}
};