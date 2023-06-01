namespace Tetris
{

    public class LBlock : Block
    {
        public override int Id => 3;

        protected override Position StartOffset => new(0, 3);

        protected override Position[][] Tiles => new Position[][]
        {
            new Position[] {new(0, 2), new(1, 0), new(1, 1), new(1, 2)}, //l block
            new Position[] {new(0, 1), new(1, 1), new(2, 1), new(2, 2)}, // 90deg ccw
            new Position[] {new(1, 0), new(1, 1), new(1, 2), new(2, 0)}, //l block mirrored
            new Position[] {new(0, 0), new(0, 1), new(1, 1), new(2, 1)}
        };
    }
}