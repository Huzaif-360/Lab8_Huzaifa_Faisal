#include<iostream>
using namespace std;
class audioClip
{
private:
  int channels;
  int resolution;
  int sampleRates;
  int Duration;
public:
  audioClip()
  {
    channels=1;
    resolution=8;
    sampleRates=22050;
  }
  void set_channels(int ch)
  {
    if(ch==1)
    {
      channels=ch;
      //cout<<" "<<ch<<endl;
    }
    else if (ch==2)
    {
      channels=ch;
      //cout<<" "<<ch<<endl;
    }
    else
  {
    channels=channels;
    cout<<"sorry channel is wrong input"<<endl;
  }
}
  int get_channels()
  {
return channels;
  }
  void set_resolution(int re)
  {

      if(re==8)
      {
        resolution=re;
        //cout<<" "<<ch<<endl;
      }
      else if (re==16)
      {
        resolution=re;
        //cout<<" "<<ch<<endl;
      }
      else if(re=24)
    {
      resolution=re;
    }
    else
      { resolution=resolution;
        cout<<"sorry resolution is wrong input"<<endl;
      }
  }
  int get_resolution()
  {
    return resolution;
  }
  void set_sampleRate(int sr)
  {

      if(sr==22050)
      {
        sampleRates=sr;
        //cout<<" "<<ch<<endl;
      }
      else if (sr==44100)
      {
        sampleRates=sr;
        //cout<<" "<<ch<<endl;
      }
      else if (sr==88200)
    {
      sampleRates=sr;
    }
    else
    { sampleRates=sampleRates;
      cout<<"sorry sampling rate is wrong input"<<endl;
    }
  }
  int get_sampleRate()
  {
    return sampleRates;
  }
  bool StudioQuality(int ch, int re, int sr)
  {
    if(ch==2 & re==24 & sr==88200)
    return true;
    else
    return false;
  }
  int dataSize(int ch,int re,int dr)
  {
    Duration=dr;
    int b=Duration*ch*(re/8)*8;
    return b;
  }
};
//**************************************************************
int main(int argc, char const *argv[]) {

  int ch,re,sr,dr;
  cout<<"enter numbers of channels:-"<<endl;
  cin>>ch;
  cout<<"enter resolution:-"<<endl;
  cin>>re;
  cout<<"enter sampling rate:-"<<endl;
  cin>>sr;
  cout<<"Enter Duration:-"<<endl;
  cin>>dr;
  audioClip A1;
  A1.set_channels(ch);
  A1.set_resolution(re);
  A1.set_sampleRate(sr);
  cout<<"numbers of channels are:-"<<A1.get_channels()<<endl;
  cout<<"resolution is:-"<<A1.get_resolution()<<endl;
  cout<<"sampling rate is:-"<<A1.get_sampleRate()<<endl;
  cout<<A1.StudioQuality(ch,re,sr)<<endl;
  cout<<"Bytes if audio clip are:-"<<A1.dataSize(ch,re,dr)<<endl;
  return 0;
}
