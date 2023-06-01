namespace Tetris
{
    public class ZBlock : Block
    {
        public override int Id => 7;

        protected override Position StartOffset => new(0, 3);

        protected override Position[][] Tiles => new Position[][]
        {
            new Position[] {new(0, 0), new(0, 1), new(1, 1), new(1, 2)},//should have called this S block
            new Position[] {new(0, 2), new(1, 1), new(1, 2), new(2, 1)},//90 deg cw rotation
            new Position[] {new(1, 0), new(1, 1), new(2, 1), new(2, 2)},//shifted to the right
            new Position[] {new(0, 1), new(1, 0), new(1, 1), new(2, 0)}//cw rotation 90 deg shifted up
        };
    }
}