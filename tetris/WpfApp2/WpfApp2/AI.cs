using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Input;

namespace Tetris
{
    public class AI
    {
        public GameState gameState { get; }

        GameState state = new GameState();

        public int x = 1;
        public void use(bool yes)
        {
            yes = false; 
                if(yes == true)
            { 
                state.RotateBlockCW();
             }
            
        }
    }
}
