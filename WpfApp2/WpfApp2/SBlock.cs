namespace Tetris
{

    public class SBlock : Block
    {
        public override int Id => 5;

        protected override Position StartOffset => new (0, 3);

        protected override Position[][] Tiles => new Position[][]
        {
            new Position[] {new(0, 1), new(0, 2), new(1, 0), new(1, 1)}, // kinda like a mirrored s
            new Position[] {new(0, 1), new(1, 1), new(1, 2), new(2, 2)}, //90 deg cw
            new Position[] {new(1, 1), new(1, 2), new(2, 0), new(2, 1)},// not rotated, bug?
            new Position[] {new(0, 0), new(1, 0), new(1, 1), new(2, 1)} //90 deg cw shifted up
        };
    }
}


