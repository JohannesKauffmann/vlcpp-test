#include <iostream>

#include <vlcpp/vlc.hpp>

int main(void)
{
    VLC::Instance inst(0, nullptr);
    VLC::MediaPlayer mp(inst);

    std::cout << "Volume:" << mp.volume() << std::endl;

    return 0;
}
